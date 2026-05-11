/*
 * XREFs of USBMIDICreateEventPackets @ 0x1C0033D34
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1C00083A8 (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C0007808 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall USBMIDICreateEventPackets(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r11
  __int64 v4; // r15
  __int64 v5; // r10
  unsigned __int8 *v6; // r14
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdi
  char v10; // r12
  char v11; // al
  unsigned int v12; // esi
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  int v16; // r13d
  __int64 v17; // rax
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  unsigned int v23; // [rsp+50h] [rbp-58h]
  bool v27; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a2;
  v6 = *(unsigned __int8 **)(a2 + 48);
  v7 = a1;
  v8 = *(_DWORD *)(a2 + 36) >> 2;
  v23 = v8;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 152LL);
  v10 = 0;
  v27 = 0;
  if ( !*(_DWORD *)(v9 + 72) )
    goto LABEL_4;
  v11 = *(_BYTE *)(v4 + 8) & 0xF8;
  v27 = v11 == -8;
  if ( v11 == -8 )
  {
    v8 = *(_DWORD *)(a2 + 36) >> 2;
    *(_BYTE *)(v9 + 68) = 0;
LABEL_4:
    v12 = 0;
    goto LABEL_5;
  }
  *(_DWORD *)v6 = *(_DWORD *)(v9 + 76);
  v12 = *(_DWORD *)(v9 + 72);
  v8 = v23;
LABEL_5:
  v13 = *(_DWORD *)(v4 + 4);
  v14 = 0;
  v15 = 0;
  if ( v13 )
  {
    do
    {
      if ( v15 >= v8 )
        break;
      v10 = 0;
      if ( v12 )
      {
        v16 = 1;
      }
      else
      {
        if ( !*(_BYTE *)(v9 + 69) || (v16 = 0, *(char *)(v14 + v4 + 8) < 0) )
          v16 = 1;
        *v6 = 16 * *(_BYTE *)(v9 + 20);
      }
      do
      {
        if ( v14 >= *(_DWORD *)(v4 + 4) )
          break;
        v17 = v12++;
        LOBYTE(v7) = *(_BYTE *)(v14 + v4 + 8);
        v14 += v16;
        v10 = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, __int64))USBMidiOutCreateByte[v17])(v9, v6, v7);
        v16 = 1;
      }
      while ( !v10 );
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v22) = v6[3];
        LODWORD(v21) = v6[2];
        LODWORD(v20) = v6[1];
        LODWORD(v19) = *v6;
        WPP_RECORDER_SF_DDDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v6[2],
          v6[1],
          v19 & 0xF,
          (__int64)&WPP_76d48e9a010c3049fe9ebb0a9a77c764_Traceguids,
          v19,
          v20,
          v21,
          v22);
      }
      if ( v10 )
        v12 = 0;
      else
        *(_DWORD *)(v9 + 76) = *(_DWORD *)v6;
      v13 = *(_DWORD *)(v4 + 4);
      v6 += 4;
      v8 = v23;
      ++v15;
    }
    while ( v14 < v13 );
    v5 = a2;
    v3 = a3;
    if ( v10 )
    {
      if ( v14 == v13 )
        v14 = *(_DWORD *)(a1 + 44);
      else
        *(_DWORD *)(v14 + *(_QWORD *)(a1 + 32) + 4LL) = v13 - v14;
      goto LABEL_29;
    }
    v7 = a1;
  }
  v14 = *(_DWORD *)(v7 + 44);
  --v15;
LABEL_29:
  *v3 = v14;
  if ( v27 )
    *(_BYTE *)(v9 + 68) = 1;
  else
    *(_DWORD *)(v9 + 72) = v12;
  *(_DWORD *)(*(_QWORD *)(v5 + 24) + 36LL) += 4 * v15;
  return v10;
}
