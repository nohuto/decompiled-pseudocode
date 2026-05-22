/*
 * XREFs of ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x1800344F0
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800340CC (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x180088224 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x18008900C (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 * Callees:
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAK@ISMTracing@@SAXAEAK00AEBK000@Z @ 0x180034624 (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAK@ISMTracing@@SAXAE.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066F44 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088FE0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GameControllerRawInputProvider::UpdateFocusPids(GameControllerRawInputProvider *this)
{
  unsigned int *v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  char *v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  const char *v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  unsigned int v13; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+30h] BYREF
  unsigned int InBuffer; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+40h] BYREF

  v2 = (unsigned int *)((char *)this + 152);
  v3 = *((_DWORD *)this + 38);
  if ( !v3 )
  {
    v3 = *((_DWORD *)this + 39);
    if ( !v3 )
      v3 = *((_DWORD *)this + 37);
  }
  InBuffer = v3;
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  v5 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v5, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x326,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             v10);
  }
  v6 = *v2;
  if ( !*v2 )
    v6 = *((_DWORD *)this + 37);
  v14 = v6;
  v7 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v14, 4LL);
  if ( v7 < 0 )
  {
    v11 = 834LL;
  }
  else
  {
    if ( *v2 )
      v8 = 0;
    else
      v8 = *((_DWORD *)this + 39);
    v13 = v8;
    v16 = *((_DWORD *)this + 40);
    if ( v8 == v16 )
      goto LABEL_15;
    v7 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v13, 4LL);
    if ( v7 >= 0 )
    {
      *((_DWORD *)this + 40) = v13;
LABEL_15:
      ISMTracing::GameControllerRawInputProvider_UpdateFocusPids<unsigned long &,unsigned long &,unsigned long &,unsigned long const &,unsigned long &,unsigned long &,unsigned long &>(
        (unsigned int *)this + 37,
        v2,
        (unsigned int *)this + 39,
        &v16,
        &InBuffer,
        &v14,
        &v13);
      return 0LL;
    }
    v11 = 860LL;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v11,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrolle"
                         "rrawinputprovider.cpp",
           (const char *)(unsigned int)v7,
           0);
}
