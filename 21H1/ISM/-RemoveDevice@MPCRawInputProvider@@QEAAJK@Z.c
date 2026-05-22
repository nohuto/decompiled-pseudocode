/*
 * XREFs of ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x18008B16C
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18008BEEC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800216BC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x180089F78 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x18008B230 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RemoveDevice(MPCRawInputProvider *this, unsigned int a2)
{
  unsigned int v2; // esi
  _BYTE *v4; // rdx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = a2;
  if ( GetCurrentThreadId() == *((_DWORD *)this + 22) )
  {
    if ( *((_BYTE *)this + 80) )
    {
      MPCRawInputProvider::RemoveDeviceImpl(this, v6);
      return 0LL;
    }
    v2 = v6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = (_BYTE *)*((_QWORD *)this + 21);
  if ( *((_BYTE **)this + 22) == v4 )
  {
    std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
      (const void **)this + 20,
      v4,
      &v6);
  }
  else
  {
    *(_DWORD *)v4 = v2;
    *((_QWORD *)this + 21) += 4LL;
  }
  wil::details::SetEvent(*((wil::details **)this + 9), v4);
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return 0LL;
}
