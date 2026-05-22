/*
 * XREFs of ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180199820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067514 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x18019B1CC (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z.c)
 */

__int64 __fastcall TouchProcessor::OnInputReport(InputInfoValidator **this, struct InputInfo *a2)
{
  __int64 v5; // rdi
  InputInfoValidator *v6; // rax
  const char *v7; // r9
  _DWORD v8[4]; // [rsp+20h] [rbp-5C8h] BYREF
  _BYTE v9[1440]; // [rsp+30h] [rbp-5B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+0h]

  if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    if ( (*(_DWORD *)a2 & 0x200003B) != 0 )
      InputInfoValidator::ValidatePointerInput(this[9], a2);
    memset_0(v9, 0, sizeof(v9));
    v5 = *((unsigned int *)a2 + 53);
    if ( (_DWORD)v5 )
      memcpy_0(v9, (char *)a2 + 216, 144 * v5);
    v8[3] = *((_DWORD *)a2 + 10);
    v6 = this[5];
    v8[0] = v5;
    v8[2] = 1;
    v8[1] = *((unsigned __int8 *)v6 + 40);
    if ( (unsigned int)MITSynthesizeTouchInput(v8) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x87,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
               v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
