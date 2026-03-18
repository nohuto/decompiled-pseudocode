/*
 * XREFs of MiMapProcessExecutable @ 0x14064EB10
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     MmMapViewOfSectionEx @ 0x1402C1530 (MmMapViewOfSectionEx.c)
 *     PsMapSystemDlls @ 0x14064CF94 (PsMapSystemDlls.c)
 *     MiCfgInitializeProcess @ 0x14064EC3C (MiCfgInitializeProcess.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(_KPROCESS *a1, __int64 a2, unsigned int *a3)
{
  int v3; // eax
  int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  int v17; // eax
  __int64 result; // rax
  unsigned __int64 v19; // rcx
  char v20; // al
  __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+70h] [rbp+7h]
  _OWORD v24[2]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v25; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a2 + 56);
  v5 = a2;
  memset(v24, 0, sizeof(v24));
  if ( (v3 & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = MiSessionCreate(), (int)result >= 0) )
  {
    v7 = *a3;
    v26 = 0LL;
    v25 = 0LL;
    v8 = 4LL;
    v21 = 0LL;
    v22 = 5LL;
    v23 = 32LL;
    v9 = MmMapViewOfSectionEx(
           v5,
           (int)a1,
           (int)&v25,
           (__int64)&v21,
           (__int64)&v26,
           (unsigned __int8)(v7 & 0x10) << 25,
           4,
           &v22,
           1,
           0,
           0LL);
    v12 = v25;
    v13 = v9;
    a1[1].Affinity.Bitmap[18] = v25;
    if ( v9 >= 0 )
    {
      v14 = *a3;
      v15 = 0;
      if ( (*a3 & 0x10) != 0 )
      {
        MiFillPteHierarchy(v12, (unsigned __int64 *)v24);
        do
        {
          v19 = *(&v23 + v8--);
          v20 = MI_READ_PTE_LOCK_FREE(v19);
          if ( (v20 & 1) == 0 )
            break;
          if ( v20 < 0 )
          {
            v15 = 1;
            break;
          }
        }
        while ( v8 != 1 );
        if ( v15 )
          v15 &= -((v14 & 0x20) != 0);
        else
          *a3 = v14 & 0xFFFFFFEF;
      }
      v16 = PsMapSystemDlls(a1, v15, v10, v11);
      if ( v16 < 0 )
        v13 = v16;
      if ( v13 >= 0 )
      {
        v17 = MiCfgInitializeProcess(a1);
        if ( v17 < 0 )
          return (unsigned int)v17;
      }
    }
    return (unsigned int)v13;
  }
  return result;
}
