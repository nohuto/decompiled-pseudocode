/*
 * XREFs of USBDeviceSetPowerState @ 0x1C002C3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002DBE0 (USBHwSelectStreamingMIDIInterface.c)
 *     USBHwStopAllMIDIPipes @ 0x1C002DEB4 (USBHwStopAllMIDIPipes.c)
 */

__int64 __fastcall USBDeviceSetPowerState(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  unsigned int v5; // esi
  __int64 v6; // r15
  unsigned int v7; // ebx
  void (__fastcall **v8)(__int64, __int64); // rdi
  _QWORD **v9; // rdi
  _QWORD *v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  void (__fastcall **v13)(__int64, __int64); // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v5 = *(_DWORD *)(v2 + 192);
  v6 = *(_QWORD *)(v2 + 200);
  if ( a2 == 1 )
  {
    v9 = (_QWORD **)(*(_QWORD *)(v2 + 72) + 192LL);
    v10 = *v9;
    if ( *v9 != v9 )
    {
      do
      {
        if ( v10 == v9 )
          break;
        v11 = USBHwSelectStreamingMIDIInterface(a1, v10, 0LL);
        v10 = (_QWORD *)*v10;
        v3 = v11;
      }
      while ( v11 >= 0 );
    }
    v12 = 0;
    if ( v5 )
    {
      v13 = (void (__fastcall **)(__int64, __int64))(v6 + 160);
      do
      {
        if ( *v13 )
          (*v13)(a1, v6 + 168LL * v12);
        ++v12;
        v13 += 21;
      }
      while ( v12 < v5 );
    }
  }
  else if ( (unsigned int)(a2 - 2) <= 2 )
  {
    v7 = 0;
    v3 = USBHwStopAllMIDIPipes();
    if ( v5 )
    {
      v8 = (void (__fastcall **)(__int64, __int64))(v6 + 152);
      do
      {
        if ( *v8 )
          (*v8)(a1, v6 + 168LL * v7);
        ++v7;
        v8 += 21;
      }
      while ( v7 < v5 );
    }
  }
  return v3;
}
