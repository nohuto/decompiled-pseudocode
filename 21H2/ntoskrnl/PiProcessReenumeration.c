/*
 * XREFs of PiProcessReenumeration @ 0x140764BE0
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140764C94 (PiMarkDeviceTreeForReenumeration.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  int v5; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_QWORD *)(v3[39] + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v4 + 300) - 789) <= 1 )
  {
    ObfDereferenceObject(v3);
    return 3221225558LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        PipClearDevNodeFlags(*(_QWORD *)(v3[39] + 40LL), 0x80000000LL);
      v5 = 1;
    }
    else
    {
      v5 = 2;
    }
    LOBYTE(a2) = v5 != 1;
    PiMarkDeviceTreeForReenumeration(v4, a2);
    BYTE4(v7) = PnPBootDriversInitialized;
    LODWORD(v7) = 3;
    PipProcessDevNodeTree(v4, a1, (unsigned int)&v7, v5, 0, 0, 0);
    return 0LL;
  }
}
