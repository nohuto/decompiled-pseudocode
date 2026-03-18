/*
 * XREFs of HalpMcaExtendedLogInitialize @ 0x1404B8AA0
 * Callers:
 *     HalpInitializeMce @ 0x1409A35FC (HalpInitializeMce.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14025FEE0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     HalpMcaExtendedLogGetL1DirectoryBase @ 0x1404B8994 (HalpMcaExtendedLogGetL1DirectoryBase.c)
 */

__int64 HalpMcaExtendedLogInitialize()
{
  __int64 v0; // rsi
  SIZE_T v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v0 = 0LL;
  v1 = 4096LL;
  if ( HalpMcaExtendedLogGetL1DirectoryBase(&v8) < 0 )
    goto LABEL_13;
  v2 = v8;
  if ( !v8 )
    goto LABEL_13;
  v3 = MmMapIoSpaceEx(v8, 4096LL, 0x204u);
  v0 = v3;
  if ( !v3 )
  {
LABEL_4:
    v4 = -1073741670;
    goto LABEL_14;
  }
  if ( *(_DWORD *)v3 != 256 )
    goto LABEL_13;
  if ( *(_DWORD *)(v3 + 4) != 64 )
    goto LABEL_13;
  v5 = *(_QWORD *)(v3 + 8);
  if ( v5 <= 0x40 )
    goto LABEL_13;
  v1 = v5;
  MmUnmapIoSpace((PVOID)v0, 0x1000uLL);
  v6 = MmMapIoSpaceEx(v2, v1, 0x204u);
  v0 = v6;
  if ( !v6 )
    goto LABEL_4;
  qword_140CF63A8 = v6;
  dword_140CF63B8 = *(_DWORD *)(v6 + 48);
  qword_140CF63B0 = (*(_QWORD *)(v6 + 8) - (unsigned __int64)*(unsigned int *)(v6 + 4)) >> 3;
  if ( qword_140CF63B0 < (unsigned __int64)(unsigned int)dword_140CF63B8 )
  {
LABEL_13:
    v4 = -1073741637;
LABEL_14:
    HalpMcaExtendedLoggingSupported = 0;
    if ( qword_140CF63C8 )
      MmUnmapIoSpace(qword_140CF63C8, *(_QWORD *)(v0 + 24));
    goto LABEL_16;
  }
  qword_140CF63C8 = (PVOID)MmMapIoSpaceEx(*(_QWORD *)(v6 + 16), *(_QWORD *)(v6 + 24), 0x204u);
  if ( qword_140CF63C8 )
  {
    qword_140CF63C0 = *(_QWORD *)(v0 + 16);
    qword_140CF63D0 = *(_QWORD *)(v0 + 24);
    *(_DWORD *)(v0 + 32) |= 1u;
    return 0;
  }
  v4 = -1073741670;
  HalpMcaExtendedLoggingSupported = 0;
LABEL_16:
  if ( v0 )
    MmUnmapIoSpace((PVOID)v0, v1);
  memset(&qword_140CF63A8, 0, 0x30uLL);
  return v4;
}
