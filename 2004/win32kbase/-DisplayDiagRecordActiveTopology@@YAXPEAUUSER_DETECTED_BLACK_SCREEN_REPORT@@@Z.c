/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C0124C90
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0124D30 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C00B5AF0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00B5BE0 (DrvQueryDisplayConfig.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int DisplayConfigBufferSizes; // eax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v4 = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2LL, (__int64)&v8, a3);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v6 = v8;
    *((_DWORD *)a1 + 5) = v8;
    if ( (_DWORD)v6 )
      v4 = Win32AllocPool(200 * v6, 0x69647355u);
    if ( v4 )
    {
      v7 = DrvQueryDisplayConfig(2LL, &v8, v4, 0LL);
      *((_DWORD *)a1 + 4) = v7;
      if ( v7 >= 0 )
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
      Win32FreePool(v4);
  }
}
