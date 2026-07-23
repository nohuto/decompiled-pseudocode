/*
 * XREFs of PerfLogImageLoad @ 0x140628E6C
 * Callers:
 *     PsCallImageNotifyRoutines @ 0x140628420 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402339FC (EtwTraceSiloKernelEvent.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwpPsProvTraceImage @ 0x1407218C4 (EtwpPsProvTraceImage.c)
 */

void __fastcall PerfLogImageLoad(unsigned __int16 *a1, __int64 a2, int *a3)
{
  int v5; // ecx
  int v6; // edx
  PIMAGE_NT_HEADERS v7; // rax
  PVOID v8[2]; // [rsp+40h] [rbp-98h] BYREF
  int v9; // [rsp+50h] [rbp-88h]
  __int64 v10; // [rsp+54h] [rbp-84h]
  char v11; // [rsp+5Ch] [rbp-7Ch]
  _BYTE v12[3]; // [rsp+5Dh] [rbp-7Bh]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp-78h]
  __int64 v14; // [rsp+68h] [rbp-70h]
  __int64 v15; // [rsp+70h] [rbp-68h]
  __int64 v16; // [rsp+78h] [rbp-60h]
  _QWORD v17[3]; // [rsp+80h] [rbp-58h] BYREF
  int v18; // [rsp+98h] [rbp-40h]
  int v19; // [rsp+9Ch] [rbp-3Ch]
  __int64 *v20; // [rsp+A0h] [rbp-38h]
  __int64 v21; // [rsp+A8h] [rbp-30h]

  v8[0] = 0LL;
  v16 = 0LL;
  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    if ( a2 )
      v5 = *(_DWORD *)(a2 + 1088);
    else
      v5 = 0;
    v8[0] = *((PVOID *)a3 + 1);
    v8[1] = *((PVOID *)a3 + 3);
    v9 = v5;
    *(_WORD *)&v12[1] = 0;
    v14 = 0LL;
    v15 = 0LL;
    v10 = 0LL;
    ImageBase = 0LL;
    v6 = *a3;
    v11 = ((unsigned int)*a3 >> 12) & 0xF;
    *(_WORD *)v12 = BYTE2(v6) & 7;
    v7 = RtlImageNtHeader(v8[0]);
    if ( v7 )
    {
      LODWORD(v10) = v7->OptionalHeader.CheckSum;
      HIDWORD(v10) = v7->FileHeader.TimeDateStamp;
      ImageBase = v7->OptionalHeader.ImageBase;
    }
    if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 4) != 0 )
      EtwpPsProvTraceImage(a1, v8, 5121LL, 0LL);
    v17[0] = v8;
    v17[1] = 56LL;
    v17[2] = *((_QWORD *)a1 + 1);
    v18 = *a1;
    v19 = 0;
    v20 = &EtwpNull;
    v21 = 2LL;
    if ( a2 )
      EtwTraceSiloKernelEvent(*(_QWORD *)(a2 + 2160), (__int64)v17, 3u, 4u, 0x30Au, 0x501903u);
    else
      EtwTraceKernelEvent((__int64)v17, 3u, 4u, 0x30Au, 0x501903u);
  }
}
