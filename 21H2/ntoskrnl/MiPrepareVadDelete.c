/*
 * XREFs of MiPrepareVadDelete @ 0x140705C58
 * Callers:
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 * Callees:
 *     MiLockAddressSpaceToo @ 0x14023BDD0 (MiLockAddressSpaceToo.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 */

__int64 __fastcall MiPrepareVadDelete(__int64 a1, char *a2, __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // r10
  int v11; // eax
  char v12; // cl
  int v14; // ecx
  struct _KTHREAD *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  struct _KTHREAD *CurrentThread; // rcx

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v9 = *(unsigned int *)(a1 + 28);
  *a5 = 0;
  v10 = v9 | v8;
  if ( a3 != v7 || (v11 = 0, a4 != v10) )
  {
    v14 = *(_DWORD *)(a1 + 48);
    if ( (v14 & 0x300000) != 0x300000 )
    {
      if ( (v14 & 0x70) != 0 )
      {
        if ( (v14 & 0x70) == 0x40 )
          goto LABEL_12;
      }
      else if ( (v14 & 0x100000) == 0 || (v14 & 0x400000) == 0 && (v14 & 0xC0000u) < 0x80000 )
      {
LABEL_12:
        if ( a3 == v7 )
        {
          *a5 = 1;
          v11 = 1;
        }
        else
        {
          v11 = 2;
          if ( a4 != v10 )
            v11 = 3;
          *a5 = v11;
        }
        goto LABEL_3;
      }
    }
    return 3221225631LL;
  }
LABEL_3:
  v12 = *a2;
  if ( !v11 )
  {
    if ( v12 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
      *a2 = 0;
    }
    return 0LL;
  }
  if ( v12 )
    return 0LL;
  v15 = KeGetCurrentThread();
  *a5 = 0;
  *a2 = 1;
  MiLockAddressSpaceToo((__int64)v15->ApcState.Process, a1);
  v16 = MiVadDeleted(a1);
  v17 = -1073741267;
  if ( v16 == 1 )
    return (unsigned int)-1073741664;
  return v17;
}
