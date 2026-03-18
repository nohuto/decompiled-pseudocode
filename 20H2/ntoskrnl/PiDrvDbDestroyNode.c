/*
 * XREFs of PiDrvDbDestroyNode @ 0x1408B8814
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140799358 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDrvDbDestroyNode(char *P)
{
  void *v2; // rcx
  char **v3; // rax
  PVOID *v4; // rcx
  void *v5; // rcx

  if ( (*((_DWORD *)P + 16) & 0x10) != 0 )
  {
    v2 = (void *)*((_QWORD *)P + 9);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = *(char ***)P;
  if ( *(_QWORD *)P )
  {
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
  }
  RtlFreeAnsiString((PUNICODE_STRING)P + 1);
  RtlFreeAnsiString((PUNICODE_STRING)P + 2);
  RtlFreeAnsiString((PUNICODE_STRING)P + 3);
  RtlFreeAnsiString((PUNICODE_STRING)(P + 504));
  if ( P[192] )
    ExDeleteResourceLite((PERESOURCE)(P + 88));
  v5 = (void *)*((_QWORD *)P + 59);
  if ( v5 )
    ZwClose(v5);
  ExFreePoolWithTag(P, 0);
}
