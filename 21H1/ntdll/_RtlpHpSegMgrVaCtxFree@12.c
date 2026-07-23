/*
 * XREFs of _RtlpHpSegMgrVaCtxFree@12 @ 0x4B37C6A4
 * Callers:
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 */

unsigned int __fastcall RtlpHpSegMgrVaCtxFree(_RTL_SRWLOCK *a1, int a2, _DWORD *a3)
{
  unsigned int *v4; // esi
  unsigned int v6; // edi
  _RTL_SRWLOCK *v7; // ecx
  int v8; // eax
  unsigned int Value_low; // edi
  unsigned int v10; // edi
  unsigned int *v11; // edx
  unsigned int *v12; // ecx
  unsigned int *v13; // ecx
  unsigned int v14; // ecx
  unsigned int result; // eax
  int v16; // [esp-8h] [ebp-28h]
  int Value; // [esp-4h] [ebp-24h]
  _RTL_SRWLOCK *v18; // [esp+10h] [ebp-10h] BYREF
  unsigned int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v4 = 0;
  Value = a1[8].Value;
  v16 = a1[7].Value;
  v19 = a2 & 0xFFE00000;
  RtlpHpQueryVA(a2 & 0xFFE00000, &v18, 0, v16, Value);
  v6 = (a2 - v19) / *a3;
  RtlAcquireSRWLockExclusive(a1 + 22);
  v7 = v18;
  v8 = (unsigned __int16)(HIWORD(v18->Value) ^ (1 << v6));
  HIWORD(v18->Value) = v8;
  Value_low = LOWORD(v7->Value);
  v21 = v8;
  v20 = v8;
  v10 = Value_low >> 15;
  if ( v8 == (1 << (0x200000u / *a3)) - 1 )
  {
    v11 = (unsigned int *)&v18[1];
    if ( v18[1].Value != -1 )
    {
      while ( 1 )
      {
        v12 = (unsigned int *)a1[v10 + 23].Value;
        if ( !v12 )
          NT_ASSERT("Link != ((void *)0)");
        a1[v10 + 23].Value = *v12;
        if ( v12 == v11 )
          break;
        *v12 = (unsigned int)v4;
        v4 = v12;
      }
      while ( 1 )
      {
        v13 = v4;
        if ( !v4 )
          break;
        v4 = (unsigned int *)*v4;
        *v13 = a1[v10 + 23].Value;
        a1[v10 + 23].Value = (unsigned int)v13;
      }
    }
  }
  else
  {
    if ( ((unsigned __int16)(v8 - 1) & (unsigned __int16)v21) == 0 )
    {
      v14 = (unsigned int)&v18[1];
      v18[1].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)a1[v10 + 23];
      a1[v10 + 23].Value = v14;
    }
    v19 = 0;
  }
  RtlReleaseSRWLockExclusive(a1 + 22);
  result = v19;
  if ( v19 )
    *a3 = 0x200000;
  return result;
}
