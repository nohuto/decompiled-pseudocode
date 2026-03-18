/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0140460
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C007D350 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C007ECC0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_DWORD *)this + 130);
  v2 = *((_QWORD *)this + 122);
  v3 = *(_DWORD *)(v2 + 340);
  if ( (v1 & 1) != 0 )
    v4 = v3 | 0x16090;
  else
    v4 = v3 | 0x6090;
  *(_DWORD *)(v2 + 340) = v4;
}
