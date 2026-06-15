/*
 * XREFs of sub_18011B6E8 @ 0x18011B6E8
 * Callers:
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011B6E8(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  pv = 0LL;
  if ( (*(int (__fastcall **)(__int64, LPVOID *, __int64 *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, &pv, &v6, 0LL) >= 0
    && (v2 = 0, (_DWORD)v6) )
  {
    v3 = 1;
    while ( 1 )
    {
      v4 = *((_QWORD *)pv + 2 * v2) - 0x11E282116F64ADCCLL;
      if ( *((_QWORD *)pv + 2 * v2) == 0x11E282116F64ADCCLL )
        v4 = *((_QWORD *)pv + 2 * v2 + 1) + 0x5FE0F28D8D38F74LL;
      if ( !v4 )
        break;
      if ( ++v2 >= (unsigned int)v6 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v3 = 0;
  }
  CoTaskMemFree(pv);
  return v3;
}
