/*
 * XREFs of ?SignalOnDirty@SFMLOGICALSURFACE@@QAEJH@Z @ 0xAB73A
 * Callers:
 *     _GreSfmRegisterLogicalSurfaceForSignaling@8 @ 0xAB694 (_GreSfmRegisterLogicalSurfaceForSignaling@8.c)
 * Callees:
 *     <none>
 */

int __thiscall SFMLOGICALSURFACE::SignalOnDirty(SFMLOGICALSURFACE *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // ecx

  v3 = 0;
  v4 = 0;
  *((_DWORD *)this + 39) = *((_DWORD *)this + 39) & 0xFFFFFFFD | (a2 != 0 ? 2 : 0);
  if ( a2 )
  {
    if ( *((_DWORD *)this + 36) )
    {
      v4 = SfmTokenArray::TransferTokens(gpSfmState, (SFMLOGICALSURFACE *)((char *)this + 136));
      if ( v4 >= 0 )
        SfmSignalTokenEvent();
    }
  }
  v5 = *((_DWORD *)this + 28);
  if ( v5 )
    v3 = *(_DWORD *)(v5 + 4);
  EtwLogicalSurfEnableDirtyNotificationEvent(*(_DWORD *)this, *(int *)this >> 31, v3, v3 >> 31);
  return v4;
}
