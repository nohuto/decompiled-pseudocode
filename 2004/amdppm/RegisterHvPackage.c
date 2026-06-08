/*
 * XREFs of RegisterHvPackage @ 0x1C0022170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     GetHvPackage @ 0x1C0021094 (GetHvPackage.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  _OWORD *HvPackage; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = HvlQueryProcessorTopology(*(unsigned int *)(a1 + 72), 0LL, &v9, 0LL);
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00133F8,
      0LL);
    v3 = qword_1C0013430;
    if ( (__int64 *)qword_1C0013430 == &qword_1C0013430 )
      goto LABEL_6;
    do
    {
      HvPackage = (_OWORD *)v3;
      if ( *(_DWORD *)(v3 + 32) == v9 )
        break;
      v3 = *(_QWORD *)v3;
      HvPackage = 0LL;
    }
    while ( (__int64 *)v3 != &qword_1C0013430 );
    if ( !HvPackage )
    {
LABEL_6:
      HvPackage = GetHvPackage(v9);
      if ( !HvPackage )
      {
LABEL_11:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00133F8);
        return (unsigned int)v2;
      }
      v5 = (_QWORD *)qword_1C0013438;
      if ( *(__int64 **)qword_1C0013438 != &qword_1C0013430 )
LABEL_13:
        __fastfail(3u);
      *(_QWORD *)HvPackage = &qword_1C0013430;
      *((_QWORD *)HvPackage + 1) = v5;
      *v5 = HvPackage;
      qword_1C0013438 = (__int64)HvPackage;
    }
    *(_QWORD *)(a1 + 1064) = HvPackage;
    ++*((_DWORD *)HvPackage + 10);
    v6 = (_QWORD *)(a1 + 1072);
    v7 = (_QWORD *)*((_QWORD *)HvPackage + 3);
    if ( (_OWORD *)*v7 == HvPackage + 1 )
    {
      *v6 = HvPackage + 1;
      *(_QWORD *)(a1 + 1080) = v7;
      *v7 = v6;
      *((_QWORD *)HvPackage + 3) = v6;
      v2 = *((_DWORD *)HvPackage + 9) != *((_DWORD *)HvPackage + 10) ? 0x103 : 0;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  return (unsigned int)v2;
}
