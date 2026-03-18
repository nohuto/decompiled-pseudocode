/*
 * XREFs of McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8
 * Callers:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreLockVisRgnPublish @ 0x1C001BA30 (GreLockVisRgnPublish.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     HmgAlloc @ 0x1C007AF10 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C007D2B0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00906E0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00A2A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqz_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  va_list v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  va_list v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  const wchar_t *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  const wchar_t *v19; // [rsp+B8h] [rbp+38h]
  va_list va2; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, const wchar_t *);
  v3 = v19;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  v11 = 4LL;
  if ( v19 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v19[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v13 = v5;
  v14 = 0;
  if ( !v19 )
    v3 = L"NULL";
  v12 = v3;
  return McGenEventWrite_EtwWriteTransfer((__int64)v3, &LockAcquireExclusive, &W32kControlGuid, 4u, &v7);
}
