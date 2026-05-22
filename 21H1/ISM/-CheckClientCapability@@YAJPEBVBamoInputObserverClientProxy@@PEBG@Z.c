/*
 * XREFs of ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180044C60
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F5180 (-RegisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?CheckCallerCapabilityWithShellFallback@@YAJPEBG@Z @ 0x1800F4F08 (-CheckCallerCapabilityWithShellFallback@@YAJPEBG@Z.c)
 */

__int64 __fastcall CheckClientCapability(const struct BamoInputObserverClientProxy *a1, const unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  const unsigned __int16 *v6; // rcx
  int v7; // ebx
  unsigned int v8; // edi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 16);
  v4 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v3 + 24LL))(v3, a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 48) + 312LL))(*(_QWORD *)(v4 + 48));
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = CheckCallerCapabilityWithShellFallback(v6);
    v8 = v9;
    if ( v9 >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
      (const char *)(unsigned int)v5);
    v8 = v7;
  }
  if ( !v7 )
    RevertToSelf();
  return v8;
}
