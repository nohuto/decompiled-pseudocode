/*
 * XREFs of IoRequestDeviceRemovalForReset @ 0x140945420
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall IoRequestDeviceRemovalForReset(_QWORD *Object, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdi
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx

  if ( !Object )
    goto LABEL_16;
  v3 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Object, (PVOID)*((unsigned __int16 *)Object + 1));
    v5 = Object[1];
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)(unsigned int)*(__int16 *)(v5 + 2));
      v6 = (_WORD *)(Object[1] + 56LL);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), (PVOID)*(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v7 = *(_QWORD *)(Object[39] + 40LL);
    if ( v7 )
    {
      v8 = (unsigned __int16 *)(v7 + 40);
      IoAddTriageDumpDataBlock(v7, (PVOID)0x310);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v8 + 1), (PVOID)*v8);
      }
      v9 = Object[39];
      v10 = (_WORD *)(*(_QWORD *)(v9 + 40) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
        v9 = Object[39];
      }
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL);
      if ( v11 )
      {
        v12 = (_WORD *)(v11 + 56);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          v13 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v13 + 64), (PVOID)*(unsigned __int16 *)(v13 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  return PnpRequestDeviceAction(Object, 26, 1, a2, 0LL, 0LL, 0LL);
}
