/*
 * XREFs of DebugNotify @ 0x1C00673F0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     _strupr_0 @ 0x1C002F1FB (_strupr_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     IsNumber @ 0x1C0067AC4 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, char *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  _BYTE *ObjectPath; // rax
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
        PrintDebugMessage(221, (_DWORD)a2, 0, 0, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2, 0LL, &qword_1C0082B20, 1) )
      {
        PrintDebugMessage(231, (_DWORD)a2, 0, 0, 0LL);
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
      PrintDebugMessage(222, 0, 0, 0, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1C0082B20);
    v8 = &unk_1C006FB8B;
    v9 = ObjectPath;
    if ( ObjectPath )
      v8 = ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v8, qword_1C0082B18);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ghNotify(2LL, (unsigned int)qword_1C0082B18, qword_1C0082B20 + 120, qword_1C0082848, PciConfigPinToLine, 0LL);
  }
LABEL_17:
  if ( qword_1C0082B20 )
    DereferenceObjectEx(qword_1C0082B20);
  return v4;
}
