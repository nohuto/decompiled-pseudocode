/*
 * XREFs of ?DestroyDesktop@@YGHPAUtagDESKTOP@@@Z @ 0x82432
 * Callers:
 *     _UnmapDesktop@4 @ 0x82292 (_UnmapDesktop@4.c)
 * Callees:
 *     ?GetDesktopName@@YGPBGPAUtagDESKTOP@@@Z @ 0x7CBEE (-GetDesktopName@@YGPBGPAUtagDESKTOP@@@Z.c)
 *     _WPP_RECORDER_SF_qS@28 @ 0x824F6 (_WPP_RECORDER_SF_qS@28.c)
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     _UnpackAffectedThreadList@0 @ 0xC843C (_UnpackAffectedThreadList@0.c)
 */

int __thiscall DestroyDesktop(int this)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  const unsigned __int16 *DesktopName; // eax
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp-10h] [ebp-1Ch]
  int v12; // [esp-Ch] [ebp-18h]

  v2 = *(_DWORD *)(this + 20);
  if ( (*(_BYTE *)(this + 24) & 8) != 0 )
    return 0;
  v3 = *(_DWORD *)(this + 140);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 8) )
    {
      Win32FreePool(*(_DWORD *)(v3 + 8));
      *(_DWORD *)(v3 + 8) = 0;
    }
    Win32FreePool(v3);
    *(_DWORD *)(this + 140) = 0;
  }
  if ( this == _gpdeskRecalcQueueAttach )
    UnpackAffectedThreadList();
  v4 = v2 + 8;
  v5 = *(_DWORD *)(v2 + 8);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v2 + 8);
    do
    {
      v5 = v6;
      if ( v6 == this )
        break;
      v4 = v6 + 16;
      v5 = *(_DWORD *)(v6 + 16);
      v6 = v5;
    }
    while ( v5 );
  }
  if ( v5 )
  {
    LockObjectAssignment(v4, *(_DWORD *)(this + 16));
    UnlockObjectAssignment(this + 16);
  }
  v7 = *(_DWORD *)(v2 + 28);
  LockObjectAssignment(this + 16, *(_DWORD *)(v7 + 24));
  LockObjectAssignment(v7 + 24, this);
  _PostThreadMessage(2, 0);
  *(_DWORD *)(this + 24) |= 8u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    DesktopName = GetDesktopName((void *)this);
    WPP_RECORDER_SF_qS(v10, v11, v12, this, DesktopName);
  }
  return 1;
}
