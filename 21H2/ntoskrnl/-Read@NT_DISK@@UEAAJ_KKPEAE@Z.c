/*
 * XREFs of ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DAA0
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousCallDriver @ 0x14023D110 (IoSynchronousCallDriver.c)
 *     IoBuildAsynchronousFsdRequest @ 0x140298BA0 (IoBuildAsynchronousFsdRequest.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 */

__int64 __fastcall NT_DISK::Read(PDEVICE_OBJECT *this, LARGE_INTEGER a2, ULONG a3, unsigned __int8 *a4)
{
  PIRP v5; // rax
  IRP *v6; // rbx
  unsigned int v7; // edi
  LARGE_INTEGER v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v5 = IoBuildAsynchronousFsdRequest(3u, this[44], a4, a3, &v9, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v7 = IoSynchronousCallDriver(this[44], v5);
    MmUnlockPages(v6->MdlAddress);
    IoFreeMdl(v6->MdlAddress);
    IoFreeIrp(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
