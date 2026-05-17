/*
 * XREFs of _EvtIntReportEventWorker@48 @ 0x4B382BB1
 * Callers:
 *     _EvtIntReportAuthzEventAndSourceAsync@44 @ 0x4B382B40 (_EvtIntReportAuthzEventAndSourceAsync@44.c)
 *     _EvtIntReportEventAndSourceAsync@44 @ 0x4B382B80 (_EvtIntReportEventAndSourceAsync@44.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 *     __local_unwind4 @ 0x4B2F6EA0 (__local_unwind4.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _EtwWriteUMSecurityEvent@16 @ 0x4B3806D0 (_EtwWriteUMSecurityEvent@16.c)
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 */

BOOL __fastcall EvtIntReportEventWorker(
        int a1,
        _BYTE *a2,
        int a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        char a7,
        char *a8,
        unsigned __int16 a9,
        int a10,
        int a11,
        int a12)
{
  _BYTE *Heap; // esi
  int v13; // edi
  unsigned int v15; // ecx
  char v16; // al
  _BYTE *v17; // edi
  char *v18; // edx
  __int16 v19; // ax
  int v20; // eax
  int v21; // edx
  int v22; // edi
  unsigned __int16 **v23; // eax
  int v24; // edx
  unsigned int i; // edi
  int v26; // ecx
  char *v27; // edi
  __int16 v28; // ax
  int v29; // edi
  int v30; // edi
  _DWORD *v31; // ecx
  NTSTATUS v32; // eax
  _DWORD v33[2]; // [esp+10h] [ebp-264h] BYREF
  int v34; // [esp+18h] [ebp-25Ch]
  _BYTE *v35; // [esp+1Ch] [ebp-258h]
  unsigned int v36; // [esp+20h] [ebp-254h]
  _DWORD v37[2]; // [esp+24h] [ebp-250h] BYREF
  unsigned int v38; // [esp+2Ch] [ebp-248h]
  int v39; // [esp+30h] [ebp-244h] BYREF
  char *v40; // [esp+34h] [ebp-240h]
  int v41; // [esp+38h] [ebp-23Ch]
  _BYTE *v42; // [esp+3Ch] [ebp-238h]
  int v43; // [esp+40h] [ebp-234h]
  int v44; // [esp+48h] [ebp-22Ch] BYREF
  char v45; // [esp+4Ch] [ebp-228h]
  char v46; // [esp+4Dh] [ebp-227h]
  __int16 v47; // [esp+4Eh] [ebp-226h]
  int v48; // [esp+50h] [ebp-224h]
  unsigned int v49; // [esp+54h] [ebp-220h]
  _BYTE v50[516]; // [esp+58h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+25Ch] [ebp-18h] BYREF

  v42 = a2;
  v34 = a1;
  v40 = a8;
  v41 = 0;
  Heap = v50;
  v35 = v50;
  v39 = 0;
  if ( (!a10 || a12) && (!a9 || a11) && v42 )
  {
    v15 = a9 + (a8 != 0) + 7;
    if ( a10 )
      ++v15;
    if ( v15 <= 0x20
      || (v13 = 8, Heap = (_BYTE *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 16 * v15), (v35 = Heap) != 0) )
    {
      v38 = 0x80000000;
      if ( a5 )
      {
        switch ( a5 )
        {
          case 1:
            v16 = 2;
            break;
          case 2:
            v16 = 3;
            break;
          case 4:
            v16 = 4;
            break;
          case 8:
            v38 = -2145386496;
            v16 = 0;
            break;
          default:
            v16 = 0;
            if ( a5 == 16 )
              v38 = -2146435072;
            break;
        }
      }
      else
      {
        v16 = 0;
      }
      v44 = 0;
      v45 = v16;
      v47 = a6;
      v46 = 0;
      v48 = 0;
      v49 = v38;
      ms_exc.registration.TryLevel = 0;
      if ( v40 )
      {
        if ( !RtlValidSid(v40) )
        {
          v13 = 87;
          v41 = 87;
          _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
          goto LABEL_4;
        }
        v39 = 4 * (unsigned __int8)v40[1] + 8;
      }
      while ( 1 )
      {
        v38 = MEMORY[0x7FFE0018];
        v37[1] = MEMORY[0x7FFE0014];
        if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
          break;
        _mm_pause();
      }
      v33[0] = MEMORY[0x7FFE0014];
      v33[1] = MEMORY[0x7FFE0018];
      *(_DWORD *)Heap = v33;
      *((_DWORD *)Heap + 1) = 0;
      *((_DWORD *)Heap + 2) = 8;
      *((_DWORD *)Heap + 3) = 0;
      *((_DWORD *)Heap + 4) = &a7;
      *((_DWORD *)Heap + 5) = 0;
      *((_DWORD *)Heap + 6) = 4;
      *((_DWORD *)Heap + 7) = 0;
      v43 = 2;
      v17 = v42;
      v18 = v42;
      v42 += 2;
      do
      {
        v19 = *(_WORD *)v18;
        v18 += 2;
      }
      while ( v19 );
      v37[0] = (unsigned __int16)(((v18 - v42) >> 1) + 1);
      *((_DWORD *)Heap + 8) = v37;
      *((_DWORD *)Heap + 9) = 0;
      *((_DWORD *)Heap + 10) = 2;
      *((_DWORD *)Heap + 11) = 0;
      v20 = 2 * v37[0];
      *((_DWORD *)Heap + 12) = v17;
      *((_DWORD *)Heap + 13) = 0;
      *((_DWORD *)Heap + 14) = v20;
      *((_DWORD *)Heap + 15) = 0;
      *((_DWORD *)Heap + 16) = &v39;
      *((_DWORD *)Heap + 17) = 0;
      *((_DWORD *)Heap + 18) = 2;
      *((_DWORD *)Heap + 19) = 0;
      v21 = 5;
      v43 = 5;
      v22 = v39;
      if ( v39 )
      {
        *((_DWORD *)Heap + 20) = v40;
        *((_DWORD *)Heap + 21) = 0;
        *((_DWORD *)Heap + 22) = v22;
        *((_DWORD *)Heap + 23) = 0;
        v21 = 6;
        v43 = 6;
      }
      v23 = (unsigned __int16 **)&Heap[16 * v21];
      *v23 = &a9;
      v23[1] = 0;
      v23[2] = (unsigned __int16 *)2;
      v23[3] = 0;
      v24 = v21 + 1;
      v43 = v24;
      for ( i = 0; ; i = v36 + 1 )
      {
        v36 = i;
        v26 = 2 * v24++;
        if ( i >= a9 )
          break;
        v40 = *(char **)(a11 + 4 * i);
        v27 = v40;
        v42 = v40 + 2;
        do
        {
          v28 = *(_WORD *)v27;
          v27 += 2;
        }
        while ( v28 );
        v29 = v27 - v42;
        *(_DWORD *)&Heap[8 * v26] = v40;
        *(_DWORD *)&Heap[8 * v26 + 4] = 0;
        *(_DWORD *)&Heap[8 * v26 + 8] = 2 * (v29 >> 1) + 2;
        *(_DWORD *)&Heap[8 * v26 + 12] = 0;
        v43 = v24;
      }
      *(_DWORD *)&Heap[8 * v26] = &a10;
      *(_DWORD *)&Heap[8 * v26 + 4] = 0;
      *(_DWORD *)&Heap[8 * v26 + 8] = 4;
      *(_DWORD *)&Heap[8 * v26 + 12] = 0;
      v43 = v24;
      v30 = a10;
      if ( a10 )
      {
        v31 = &Heap[16 * v24];
        *v31 = a12;
        v31[1] = 0;
        v31[2] = v30;
        v31[3] = 0;
        v43 = ++v24;
      }
      if ( v34 )
        v32 = EtwWriteUMSecurityEvent(&v44, 4, v24, (int)Heap);
      else
        v32 = EtwpEventWriteFull(&v44, 0, a3, a4, 0, 0, 4, 0, 0, v24, (int)Heap);
      v13 = v32;
      v41 = v32;
      ms_exc.registration.TryLevel = -2;
      if ( Heap != v50 )
      {
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
        v13 = v41;
      }
    }
  }
  else
  {
    v13 = 87;
  }
LABEL_4:
  RtlSetLastWin32Error((struct _TEB *)v13);
  return v13 == 0;
}
