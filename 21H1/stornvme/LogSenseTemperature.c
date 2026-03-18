/*
 * XREFs of LogSenseTemperature @ 0x1C00129F8
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C00154BC (ScsiLogSenseRequest.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     TemperatureFromKelvinToCelsius @ 0x1C00160DC (TemperatureFromKelvinToCelsius.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // esi
  char v9; // al
  char v10; // al
  __int64 SrbExtension; // rbx
  void *v12; // r9
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = a2;
  v15 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = 16LL;
  }
  if ( v6 && (v8 = *(_DWORD *)(a2 + v7), v8 >= 0xA) )
  {
    NVMeZeroMemory(v6, v8);
    v9 = *((_BYTE *)v6 + 6);
    *((_WORD *)v6 + 2) = 0;
    *v6 = 201326605;
    *((_BYTE *)v6 + 6) = v9 & 0x40 | 3;
    *((_BYTE *)v6 + 7) = 2;
    *((_BYTE *)v6 + 9) = -1;
    if ( v8 >= 0x10 )
    {
      *((_WORD *)v6 + 5) = 256;
      v10 = v6[3] & 0x40;
      *((_BYTE *)v6 + 13) = 2;
      *((_BYTE *)v6 + 12) = v10 | 3;
      *((_BYTE *)v6 + 15) = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a1 + 196));
    }
    NVMeAllocateDmaBuffer(a1, 512LL, &v14, &v15);
    if ( v14 )
    {
      SrbExtension = GetSrbExtension(v4);
      memset(v12, 0, 0x200uLL);
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, v4);
      BuildGetLogPageCommand(a1, SrbExtension, 2u, 0x200u, v15, -1, 0LL, 0);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageHealthInfoCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v14;
      *(_QWORD *)(SrbExtension + 4208) = v15;
      *(_DWORD *)(SrbExtension + 4240) = 512;
      *(_QWORD *)(SrbExtension + 4232) = 13LL;
    }
    else
    {
      *(_BYTE *)(v4 + 3) = 4;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return 3238002694LL;
  }
}
