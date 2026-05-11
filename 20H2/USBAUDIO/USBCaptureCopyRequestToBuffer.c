/*
 * XREFs of USBCaptureCopyRequestToBuffer @ 0x1C00336B4
 * Callers:
 *     USBCaptureProcessPin @ 0x1C0006E90 (USBCaptureProcessPin.c)
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C00015C8 (WPP_RECORDER_SF_qdd.c)
 *     memmove @ 0x1C0013540 (memmove.c)
 */

char __fastcall USBCaptureCopyRequestToBuffer(__int64 a1, struct _KSSTREAM_POINTER *a2, _BYTE *a3)
{
  PKSPIN Pin; // r10
  ULONG Remaining; // ebx
  unsigned __int16 *v7; // r11
  __int64 v8; // r13
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  _UNKNOWN **v11; // rax
  __int64 v12; // rcx
  unsigned __int16 *v13; // rsi
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  const void *v18; // r15
  ULONG v19; // r14d
  ULONG v20; // edi
  ULONG v22; // [rsp+80h] [rbp+8h]
  _QWORD *Context; // [rsp+88h] [rbp+10h]

  Pin = a2->Pin;
  Remaining = a2->OffsetOut.Remaining;
  v22 = Remaining;
  *a3 = 0;
  v7 = *(unsigned __int16 **)(a1 + 24);
  Context = Pin->Context;
  v8 = Context[19];
  v9 = *v7;
  v10 = *(unsigned int *)(v8 + 108);
  if ( v9 >= 12 * v10 + 152 )
  {
    v12 = *(unsigned int *)(a1 + 32);
    v13 = &v7[4 * v12 + 70 + 2 * v12];
    if ( *((int *)v13 + 2) < 0 || (LOBYTE(v11) = 0, !*((_DWORD *)v13 + 1)) )
      LOBYTE(v11) = 1;
    if ( (unsigned int)v12 < (unsigned int)v10 )
    {
      v14 = *(_DWORD *)(a1 + 32);
      v15 = *(_DWORD *)(v8 + 108);
      do
      {
        v16 = v14;
        v17 = v15;
        if ( !(_BYTE)v11 )
          break;
        v13 += 6;
        a2->StreamHeader->OptionsFlags |= 4u;
        v14 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v14;
        if ( *((int *)v13 + 2) >= 0 )
        {
          LOBYTE(v11) = 0;
          if ( *((_DWORD *)v13 + 1) )
            continue;
        }
        LOBYTE(v11) = 1;
        v15 = *(_DWORD *)(v8 + 108);
        v16 = v14;
        v17 = v15;
      }
      while ( v14 < v15 );
      if ( v16 < v17 )
      {
LABEL_15:
        v18 = (const void *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)v13);
        v19 = *((_DWORD *)v13 + 1);
        while ( v19 && Remaining && *(_BYTE *)(v8 + 96) )
        {
          v20 = v19;
          if ( Remaining < v19 )
            v20 = Remaining;
          memmove(a2->OffsetOut.Data, v18, v20);
          v19 -= v20;
          Context[10] += v20;
          v22 -= v20;
          Remaining = v22;
          KsStreamPointerAdvanceOffsets(a2, 0, v20, 0);
          if ( v22 )
          {
            while ( 1 )
            {
              LODWORD(v11) = *(_DWORD *)(a1 + 32) + 1;
              *(_DWORD *)(a1 + 32) = (_DWORD)v11;
              if ( (unsigned int)v11 >= *(_DWORD *)(v8 + 108) )
                break;
              v13 += 6;
              if ( *((int *)v13 + 2) >= 0 )
                goto LABEL_15;
              a2->StreamHeader->OptionsFlags |= 4u;
            }
          }
          else
          {
            LOBYTE(v11) = (_BYTE)a3;
            *a3 = 1;
            if ( v19 )
            {
              LODWORD(v11) = *((_DWORD *)v13 + 1) - v19;
              *((_DWORD *)v13 + 1) = v19;
              *(_DWORD *)v13 += (_DWORD)v11;
            }
            else
            {
              ++*(_DWORD *)(a1 + 32);
            }
          }
        }
      }
    }
  }
  else
  {
    v11 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOBYTE(v11) = WPP_RECORDER_SF_qdd(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      (__int64)a2,
                      3u,
                      0x14u,
                      (__int64)&WPP_26ea32ae020134248ddb7b587958131d_Traceguids,
                      Pin,
                      v9,
                      12 * (int)v10 + 152);
  }
  return (char)v11;
}
