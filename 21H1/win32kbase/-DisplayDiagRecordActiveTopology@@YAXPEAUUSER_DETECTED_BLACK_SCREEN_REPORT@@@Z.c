/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C012AC80
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C00960A0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0096190 (DrvQueryDisplayConfig.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int DisplayConfigBufferSizes; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v4 = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2LL, (__int64)&v10, a3);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v8 = v10;
    *((_DWORD *)a1 + 5) = v10;
    if ( (_DWORD)v8 )
      v4 = Win32AllocPool(200 * v8, 0x69647355u);
    if ( v4 )
    {
      v9 = DrvQueryDisplayConfig(2LL, &v10, v4, 0LL);
      *((_DWORD *)a1 + 4) = v9;
      if ( v9 >= 0 )
      {
        *((_QWORD *)a1 + 3) = v4;
        v4 = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 4) = 14;
    }
    if ( v4 )
      Win32FreePool(v4, v6, v7);
  }
}
