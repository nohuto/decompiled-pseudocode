/*
 * XREFs of ValidateHbwnd @ 0x1C0119F80
 * Callers:
 *     ?ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C012A88C (-ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0180B70 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0180EE8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0181058 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019169C (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateHbwnd(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v5 = (char *)qword_1C0248D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0248D50,
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v11,
          a2,
          a3,
          a4),
        v9 = a1 >> 16,
        (_WORD)v9 != *((_WORD *)v5 + 13))
    && (_WORD)v9 != 0xFFFF
    && ((_WORD)v9 || !PsGetCurrentProcessWow64Process(v6))
    || v5[24] != 23
    || (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v11,
          a2,
          v7,
          v8),
        (result = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((v5 - (char *)qword_1C0248D48) >> 5))) == 0)
    || (v5[25] & 1) != 0 )
  {
    UserSetLastError(1400LL, a2);
    return 0LL;
  }
  return result;
}
