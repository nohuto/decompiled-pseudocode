/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x14073A5A4
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x14073C9B4 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A507C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A77A8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PiDevCfgFreeDriverNode @ 0x14073A5A4 (PiDevCfgFreeDriverNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD **v8; // rdi
  _QWORD *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax

  v4 = (_QWORD **)(a1 + 224);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v14 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
LABEL_19:
      __fastfail(3u);
    *v4 = v14;
    v14[1] = v4;
    PiDevCfgFreeDriverNode(v5, a2, a3);
  }
  v6 = (_QWORD **)(a1 + 208);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_19;
    v15 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_19;
    *v6 = v15;
    v15[1] = v6;
    PiDevCfgFreeDriverNode(v7, a2, a3);
  }
  v8 = (_QWORD **)(a1 + 368);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 )
      goto LABEL_19;
    v16 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_19;
    *v8 = v16;
    v16[1] = v8;
    PiDevCfgFreeDriverNode(v9, a2, a3);
  }
  v10 = *(void **)(a1 + 144);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(void **)(a1 + 16);
  if ( v11 )
    ZwClose(v11);
  v12 = *(void **)(a1 + 24);
  if ( v12 )
    ZwClose(v12);
  v13 = *(void **)(a1 + 32);
  if ( v13 )
    ZwClose(v13);
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 56));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 40));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 72));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 88));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 128));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 160));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 256));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 272));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 352));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 392));
  ExFreePoolWithTag((PVOID)a1, 0);
}
