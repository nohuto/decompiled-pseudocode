/*
 * XREFs of _RegRtlDeletePathInternal @ 0x14097810C
 * Callers:
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A11DC (PiDevCfgClearDeviceMigrationNode.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14025BB84 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x1402E6214 (RtlStringCchCopyExW.c)
 *     wcsrchr @ 0x1403CFCC0 (wcsrchr.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x140617E68 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlQueryInfoKey @ 0x1406E213C (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x1407500B4 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140750498 (_RegRtlDeleteKeyTransacted.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlDeletePathInternal(char *a1, const wchar_t *a2, char a3, __int64 a4, int a5)
{
  int v9; // ebx
  size_t v10; // rbx
  wchar_t *PoolWithTag; // rax
  WCHAR *v12; // rdi
  char i; // al
  int v14; // eax
  wchar_t *v15; // rax
  int v17; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  size_t pcchLength[2]; // [rsp+40h] [rbp-10h] BYREF

  pcchLength[0] = 0LL;
  Handle = 0LL;
  a5 = 0;
  v17 = 0;
  v9 = RtlUnalignedStringCchLengthW(a2, 0x7FFFuLL, pcchLength);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = pcchLength[0] + 1;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength[0] + 1), 0x4C474552u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  v9 = RtlStringCchCopyExW(PoolWithTag, v10, a2, 0LL, 0LL, 0x100u);
  if ( v9 )
    goto LABEL_26;
  for ( i = 1; ; i = 0 )
  {
    if ( i && a3 )
    {
      v14 = RegRtlDeleteTreeInternal(a1, v12, a4, 0);
      goto LABEL_17;
    }
    v9 = RegRtlOpenKeyTransacted(a1, v12, 0, 1u, &Handle, a4);
    if ( !v9 )
    {
      v9 = RegRtlQueryInfoKey(Handle, &a5, 0LL, &v17, 0LL, 0LL);
      ZwClose(Handle);
      if ( v9 != -1073741444 && v9 )
        goto LABEL_26;
      if ( a5 || v17 )
      {
        v9 = -1073741535;
        goto LABEL_26;
      }
      goto LABEL_16;
    }
    if ( v9 != -1073741772 )
      break;
LABEL_16:
    v14 = RegRtlDeleteKeyTransacted(a1, v12, 0LL);
LABEL_17:
    v9 = v14;
    if ( v14 && v14 != -1073741772 )
      goto LABEL_26;
    v15 = wcsrchr(v12, 0x5Cu);
    if ( !v15 )
      goto LABEL_26;
    for ( *v15 = 0; v15 != v12; *v15 = 0 )
    {
      if ( *--v15 != 92 )
        break;
    }
  }
  if ( v9 == -1073741444 )
    v9 = 0;
LABEL_26:
  ExFreePoolWithTag(v12, 0);
  return (unsigned int)v9;
}
