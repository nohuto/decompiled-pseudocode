/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0173F70
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5F30 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C0171860 (-CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C0171A10 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C0172B58 (-StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ConvertPointCoordinates @ 0x1C01B0520 (ConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  unsigned int v6; // ebx
  _QWORD *v7; // r12
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r12
  __m128i v19; // xmm2
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int64 v22; // xmm0_8
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // r14
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rdx
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v35; // [rsp+28h] [rbp-89h]
  __int128 v36; // [rsp+78h] [rbp-39h]
  __int128 v37; // [rsp+88h] [rbp-29h]
  int v38; // [rsp+118h] [rbp+67h]
  __int64 v40; // [rsp+130h] [rbp+7Fh]

  v3 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  *a3 = 0LL;
  v7 = a3;
  v8 = Win32AllocPoolZInit(v3, 1717793618LL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = v3;
    if ( a2 )
      v10 = *(_QWORD *)(a2 + 16);
    else
      v10 = 0LL;
    v11 = v8 + 2;
    v40 = v10;
    v11[1] = v11;
    *v11 = v11;
    *v9 = *(_DWORD *)(a1 + 16);
    v9[6] = *(_DWORD *)(a1 + 20);
    v9[7] = *(_DWORD *)(a1 + 24);
    *(_OWORD *)(v9 + 10) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v9 + 14) = *(_OWORD *)(a1 + 48);
    *((_QWORD *)v9 + 9) = *(_QWORD *)(a1 + 64);
    v35 = 0LL;
    *((LARGE_INTEGER *)v9 + 7) = KeQueryPerformanceCounter(0LL);
    v9[20] = *(_DWORD *)(a1 + 72);
    v9[21] = *(_DWORD *)(a1 + 76);
    v9[22] = *(_DWORD *)(a1 + 80);
    v9[23] = *(_DWORD *)(a1 + 84);
    *((_QWORD *)v9 + 12) = *(_QWORD *)(a1 + 88);
    *((_QWORD *)v9 + 15) = v9 + 32;
    *((_QWORD *)v9 + 4) = v10;
    if ( a2 && *(_QWORD *)(a2 + 480) )
      v35 = *(_QWORD *)(a2 + 480);
    InputTraceLogging::RIM::StartFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v9);
    v12 = *(_QWORD *)(a1 + 112);
    v13 = 0LL;
    v38 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v14 = 192 * v13;
        *(_DWORD *)(v14 + *((_QWORD *)v9 + 15)) = *(_DWORD *)v12;
        *(_WORD *)(v14 + *((_QWORD *)v9 + 15) + 8) = *(_WORD *)(v12 + 8);
        *(_WORD *)(v14 + *((_QWORD *)v9 + 15) + 10) = *(_WORD *)(v12 + 12);
        *(_DWORD *)(v14 + *((_QWORD *)v9 + 15) + 160) = *(_DWORD *)(v12 + 152);
        *(_DWORD *)(v14 + *((_QWORD *)v9 + 15) + 164) = *(_DWORD *)(v12 + 156);
        v15 = *(_DWORD *)(v12 + 16);
        if ( v15 == 2 || v15 == 5 )
        {
          v17 = *((_QWORD *)v9 + 15);
          *(_DWORD *)(v14 + v17 + 112) = *(_DWORD *)(v12 + 104);
          *(_DWORD *)(v14 + v17 + 116) = *(_DWORD *)(v12 + 108);
          *(_OWORD *)(v14 + v17 + 120) = *(_OWORD *)(v12 + 112);
          *(_OWORD *)(v14 + v17 + 136) = *(_OWORD *)(v12 + 128);
          *(_DWORD *)(v14 + v17 + 152) = *(_DWORD *)(v12 + 144);
          *(_DWORD *)(v14 + v17 + 156) = *(_DWORD *)(v12 + 148);
        }
        else if ( v15 == 3 )
        {
          v16 = *((_QWORD *)v9 + 15);
          *(_DWORD *)(v14 + v16 + 112) = *(_DWORD *)(v12 + 104);
          *(_DWORD *)(v14 + v16 + 116) = *(_DWORD *)(v12 + 108);
          *(_DWORD *)(v14 + v16 + 120) = *(_DWORD *)(v12 + 112);
          *(_DWORD *)(v14 + v16 + 124) = *(_DWORD *)(v12 + 116);
          *(_DWORD *)(v14 + v16 + 128) = *(_DWORD *)(v12 + 120);
          *(_DWORD *)(v14 + v16 + 132) = *(_DWORD *)(v12 + 124);
        }
        v18 = *((_QWORD *)v9 + 15);
        v19 = *(__m128i *)(v12 + 16);
        v20 = *(_QWORD *)(v12 + 40);
        v36 = *(_OWORD *)(v12 + 48);
        v21 = *(_OWORD *)(v12 + 80);
        v37 = *(_OWORD *)(v12 + 64);
        v22 = *(_QWORD *)(v12 + 96);
        *(_DWORD *)(v14 + v18 + 20) = v19.m128i_i32[1];
        *(_DWORD *)(v14 + v18 + 16) = _mm_cvtsi128_si32(v19);
        *(_DWORD *)(v14 + v18 + 28) = _mm_srli_si128(v19, 8).m128i_i32[1];
        *(_QWORD *)(v14 + v18 + 32) = v40;
        *(_QWORD *)(v14 + v18 + 64) = *((_QWORD *)&v36 + 1);
        *(_QWORD *)(v14 + v18 + 48) = v20;
        if ( v15 == 5 || !v35 )
        {
          *(_QWORD *)(v14 + v18 + 56) = v36;
          *(_QWORD *)(v14 + v18 + 72) = v37;
        }
        else
        {
          ConvertPointCoordinates(v20);
          ConvertPointCoordinates(*(_QWORD *)(v14 + v18 + 64));
        }
        *(_QWORD *)(v14 + v18 + 80) = *((_QWORD *)&v37 + 1);
        *(_OWORD *)(v14 + v18 + 88) = v21;
        *(_DWORD *)(v14 + v18 + 104) = v22;
        InputTraceLogging::RIM::CopyPointerFromContainer(
          (struct RIMDEV *const)a2,
          (const struct tagPOINTEREVENTINT *)(v14 + *((_QWORD *)v9 + 15) + 8LL));
        v12 += 176LL;
        v13 = (unsigned int)(v38 + 1);
        v38 = v13;
      }
      while ( (unsigned int)v13 < *(_DWORD *)(a1 + 20) );
      v7 = a3;
    }
    v23 = *((_QWORD *)v9 + 15);
    *((_QWORD *)v9 + 13) = v23;
    v24 = 3 * *(_DWORD *)(a1 + 20);
    v9[7] = *(_DWORD *)(a1 + 24);
    v25 = *(_QWORD *)(a1 + 104);
    v26 = v24 << 6;
    if ( v25 )
    {
      v27 = v23 + v26;
      *((_QWORD *)v9 + 14) = v27;
      v25 = *(_QWORD *)(a1 + 104);
    }
    else
    {
      v27 = *((_QWORD *)v9 + 14);
    }
    while ( v25 )
    {
      while ( 1 )
      {
        *(_DWORD *)v27 = *(_DWORD *)v25;
        *(_DWORD *)(v27 + 4) = *(_DWORD *)(v25 + 4);
        *(_QWORD *)(v27 + 8) = v27 + 24;
        memmove((void *)(v27 + 24), *(const void **)(v25 + 8), *(unsigned int *)(v25 + 4));
        v30 = (__int64 *)(v25 + 16);
        v31 = *(_DWORD *)(v25 + 4) + 7;
        *(_QWORD *)(v27 + 16) = 0LL;
        v25 = *(_QWORD *)(v25 + 16);
        v32 = (v31 & 0xFFFFFFF8) + 24;
        v33 = 0LL;
        if ( v25 )
        {
          v33 = v27 + v32;
          *(_QWORD *)(v27 + 16) = v33;
          v25 = *v30;
        }
        v27 = v33;
        if ( !v33 )
          break;
        if ( !v25 )
          goto LABEL_29;
      }
      if ( !v25 )
        break;
LABEL_29:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v30, v28, v29);
    }
    *v7 = v9;
    v6 = 1;
    InputTraceLogging::RIM::CompleteFrameFromContainer((struct RIMDEV *const)a2, (const struct RIMCOMPLETEFRAME *)v9);
  }
  return v6;
}
