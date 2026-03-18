/*
 * XREFs of ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@IIK@Z @ 0x1C00362B0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0qqqqXR3XR3_EtwWriteTransfer @ 0x1C00380C8 (McTemplateK0qqqqXR3XR3_EtwWriteTransfer.c)
 */

void __fastcall VidSchiTraceHwFlipQueueLogUpdate(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_VSYNC_COOKIE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  unsigned int v14; // ebx
  _QWORD *v15; // rdx
  _QWORD v16[64]; // [rsp+50h] [rbp-418h] BYREF
  _QWORD v17[64]; // [rsp+250h] [rbp-218h] BYREF

  v5 = a3;
  v8 = a4;
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  v9 = *((_QWORD *)a1 + v5 + 400);
  v10 = 0LL;
  v11 = 280 * v8;
  v12 = *(_DWORD *)(v9 + 280 * v8 + 364);
  v13 = (a5 + 1) % v12;
  v14 = (v12 + *(_DWORD *)(v9 + 280 * v8 + 368) - 1) % v12 + 1;
  while ( v13 != v14 % v12 )
  {
    v15 = (_QWORD *)(*(_QWORD *)(v9 + v11 + 416) + 16LL * v13);
    v17[v10] = *v15;
    v16[v10] = v15[1];
    v12 = *(_DWORD *)(v9 + v11 + 364);
    v10 = (unsigned int)(v10 + 1);
    v13 = (v13 + 1) % v12;
  }
  if ( (byte_1C006E944 & 1) != 0 )
    McTemplateK0qqqqXR3XR3_EtwWriteTransfer(
      v12,
      v14 % v12,
      v10,
      v5,
      v8,
      *((_DWORD *)a2 + 22),
      v10,
      (__int64)v17,
      (__int64)v16);
}
