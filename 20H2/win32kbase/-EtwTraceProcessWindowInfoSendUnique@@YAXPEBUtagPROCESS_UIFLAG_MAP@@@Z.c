/*
 * XREFs of ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C0124FC0
 * Callers:
 *     EtwTraceProcessWindowInfo @ 0x1C00827D0 (EtwTraceProcessWindowInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     McTemplateK0qqmx_EtwWriteTransfer @ 0x1C0129404 (McTemplateK0qqmx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceProcessWindowInfoSendUnique(
        const struct tagPROCESS_UIFLAG_MAP *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  char *v6; // rcx
  _DWORD *v7; // r8
  char *v8; // rdx
  __int128 v9; // xmm1
  int v10; // r8d
  int v11; // r9d

  GetDomainLockRef(21LL, a2, a3, a4);
  v5 = 0;
  if ( !gfProcessWindowInfoInit )
  {
    gfProcessWindowInfoInit = 1;
    memset(&gaProcessUIFlagMap, 0, 0x280uLL);
  }
  v6 = (char *)&gaProcessUIFlagMap;
  v7 = &gaProcessUIFlagMap;
  while ( 1 )
  {
    if ( v7[6] < *((_DWORD *)v6 + 6) )
      v6 = (char *)&gaProcessUIFlagMap + 32 * v5;
    if ( *(_QWORD *)v7 == *(_QWORD *)a1 )
      break;
    ++v5;
    v7 += 8;
    if ( v5 >= 0x14 )
      goto LABEL_8;
  }
  v8 = (char *)&gaProcessUIFlagMap + 32 * v5;
  if ( !v8 )
  {
LABEL_8:
    v8 = v6;
    v9 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v6 = *(_OWORD *)a1;
    *((_OWORD *)v6 + 1) = v9;
    goto LABEL_9;
  }
  v10 = *((_DWORD *)a1 + 5);
  v11 = *((_DWORD *)v8 + 5);
  *((_DWORD *)v8 + 6) = *((_DWORD *)a1 + 6);
  if ( (v11 & v10) == v10 )
    return;
  LODWORD(v7) = v11 | v10;
  *((_DWORD *)v8 + 5) = (_DWORD)v7;
LABEL_9:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000000000LL) != 0 )
    McTemplateK0qqmx_EtwWriteTransfer(
      (_DWORD)v8 + 8,
      (_DWORD)v8,
      (_DWORD)v7,
      *((_DWORD *)v8 + 5),
      *((_DWORD *)v8 + 4),
      (__int64)(v8 + 8),
      *(_QWORD *)v8);
}
