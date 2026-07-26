/*
 * XREFs of ndisPadShortPacket @ 0x1C00C30F4
 * Callers:
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C3044 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPadShortPacket(__int64 a1, struct _MDL **a2, int a3)
{
  unsigned int v4; // edi
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rsi
  __int64 v8; // rcx

  v4 = 0;
  Mdl = IoAllocateMdl(&ZeroBuffer, 60 - a3, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    *a2 = v7;
    v8 = *(unsigned __int16 *)(a1 + 42);
    *(_DWORD *)(a1 + 36) |= 0x10000u;
    *(_QWORD *)(v8 + a1 + 128) = a2;
    *(_BYTE *)(a1 + 40) = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
