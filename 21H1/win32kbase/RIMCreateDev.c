/*
 * XREFs of rimCreateDev @ 0x1C00A3D64
 * Callers:
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 * Callees:
 *     RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C00A3E48 (RawInputManagerDeviceObjectCreateKernelHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00A3F48 (RawInputManagerDeviceObjectCreate.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

_QWORD *__fastcall rimCreateDev(int a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rbx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  _OWORD *v9; // rax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  v13 = 0LL;
  if ( (int)RawInputManagerDeviceObjectCreate(a1, a2, a3, a4, &Handle) >= 0 )
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(Handle, 3LL, 1LL, &v12) < 0 )
    {
      ObCloseHandle(Handle, 1);
    }
    else
    {
      v8 = v12;
      if ( (int)RawInputManagerDeviceObjectCreateKernelHandle(v12, v5, v6, v7, &v13) >= 0 )
      {
        v9 = (_OWORD *)(v8 + 72);
        if ( !v8 )
          v9 = 0LL;
        *v9 = 0LL;
        if ( v8 )
          v4 = (_QWORD *)(v8 + 88);
        memset(v4, 0, 0x908uLL);
        v4[4] = v8;
        v4[2] = Handle;
        v4[3] = v13;
        v4[14] = v4 + 13;
        v4[13] = v4 + 13;
        v4[16] = v4 + 15;
        v4[15] = v4 + 15;
        v4[18] = v4 + 17;
        v4[17] = v4 + 17;
      }
    }
  }
  return v4;
}
