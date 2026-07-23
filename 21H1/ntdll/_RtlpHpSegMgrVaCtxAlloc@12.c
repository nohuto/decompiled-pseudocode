/*
 * XREFs of _RtlpHpSegMgrVaCtxAlloc@12 @ 0x4B37C5EC
 * Callers:
 *     _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9 (_RtlpHpSegMgrReserve@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

unsigned int __fastcall RtlpHpSegMgrVaCtxAlloc(_RTL_SRWLOCK *a1, int a2, char a3)
{
  int v3; // esi
  _RTL_SRWLOCK *v4; // edi
  _DWORD *Value; // ebx
  _RTL_SRWLOCK *v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // edx
  unsigned int v12; // [esp+10h] [ebp-8h]

  v3 = 0;
  v4 = a1 + 24;
  if ( a1[23].Value || v4->Value )
  {
    RtlAcquireSRWLockExclusive(a1 + 22);
    Value = (_DWORD *)v4->Value;
    v6 = a1;
    if ( v4->Value || (a3 & 2) == 0 && (v4 = a1 + 23, (Value = (_DWORD *)a1[23].Value) != 0) )
    {
      v7 = *((unsigned __int16 *)Value - 1);
      _BitScanForward(&v8, v7);
      v12 = v8;
      LOWORD(v7) = v7 ^ (1 << v8);
      *((_WORD *)Value - 1) = v7;
      if ( !(_WORD)v7 )
      {
        if ( v4->Value )
          v4->0 = *($64EDA4DD838E80CF9A7DD220E06F3FD2 *)v4->Value;
        *Value = 0;
      }
      RtlReleaseSRWLockExclusive(v6 + 22);
      v9 = (_DWORD *)dword_4B3A6E38[7 * *((unsigned __int8 *)Value - 7)];
      return v9[1] + a2 * v12 + (((unsigned int)Value - v9[5] - 8) >> v9[3] << 20);
    }
    else
    {
      RtlReleaseSRWLockExclusive(a1 + 22);
    }
  }
  return v3;
}
