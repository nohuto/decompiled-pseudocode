/*
 * XREFs of DebugNotify @ 0x1C0065FB0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00215DC (GetNameSpaceObject.c)
 *     GetObjectPath @ 0x1C0023838 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _strupr_0 @ 0x1C0031ADB (_strupr_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 *     IsNumber @ 0x1C0066694 (IsNumber.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, _BYTE *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  _QWORD *ObjectPath; // rax
  void *v8; // rdx
  void *v9; // rdi

  v4 = 0;
  if ( a2 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( (unsigned __int8)IsNumber(a2, 16LL) )
          goto LABEL_17;
        PrintDebugMessage(221, a2, 0LL, 0LL, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2, 0LL, &qword_1C0083490, 1) )
      {
        PrintDebugMessage(231, a2, 0LL, 0LL, 0LL);
LABEL_11:
        v4 = -2;
      }
    }
  }
  else
  {
    if ( a4 != 2 )
    {
LABEL_10:
      PrintDebugMessage(222, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1C0083490);
    v8 = &unk_1C00701BA;
    v9 = ObjectPath;
    if ( ObjectPath )
      v8 = ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v8, qword_1C0083488);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ghNotify(2LL, (unsigned int)qword_1C0083488, qword_1C0083490 + 120, qword_1C00831D0, PciConfigPinToLine, 0LL);
  }
LABEL_17:
  if ( qword_1C0083490 )
    DereferenceObjectEx(qword_1C0083490);
  return v4;
}
