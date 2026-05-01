/*
 * XREFs of ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801A74B4
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18006F980 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801A5C00 (-ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 */

__int64 __fastcall FullScreenPositioner::RemoveView(
        FullScreenPositioner *this,
        struct IUnknown *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (__int64)(*((_QWORD *)this + 32) - *((_QWORD *)this + 31)) >> 3;
  try
  {
    while ( v6 )
    {
      if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(*((_QWORD *)this + 31) + 8 * v6 - 8), a2) )
      {
        memmove_0(
          (void *)(*((_QWORD *)this + 31) + 8 * v6 - 8),
          (const void *)(*((_QWORD *)this + 31) + 8 * v6),
          *((_QWORD *)this + 32) - (*((_QWORD *)this + 31) + 8 * v6));
        *((_QWORD *)this + 32) -= 8LL;
        break;
      }
      --v6;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x582,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           a4);
  }
  return result;
}
