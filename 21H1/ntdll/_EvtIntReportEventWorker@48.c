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
        char *a2,
        int a3,
        __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        char a7,
        void *a8,
        unsigned __int16 a9,
        unsigned int a10,
        int a11,
        int a12)
{
  _EVENT_DATA_DESCRIPTOR *Heap; // esi
  LONG v13; // edi
  unsigned int v15; // ecx
  unsigned __int8 v16; // al
  char *v17; // edi
  char *v18; // edx
  __int16 v19; // ax
  int v20; // eax
  int v21; // edx
  unsigned int v22; // edi
  _EVENT_DATA_DESCRIPTOR *v23; // eax
  ULONG v24; // edx
  unsigned int i; // edi
  int v26; // ecx
  char *v27; // edi
  __int16 v28; // ax
  int v29; // edi
  unsigned int v30; // edi
  _EVENT_DATA_DESCRIPTOR *v31; // ecx
  unsigned __int32 v32; // eax
  SIZE_T v33; // [esp-4h] [ebp-278h]
  _DWORD v34[2]; // [esp+10h] [ebp-264h] BYREF
  int v35; // [esp+18h] [ebp-25Ch]
  _EVENT_DATA_DESCRIPTOR *v36; // [esp+1Ch] [ebp-258h]
  unsigned int v37; // [esp+20h] [ebp-254h]
  _DWORD v38[2]; // [esp+24h] [ebp-250h] BYREF
  unsigned int v39; // [esp+2Ch] [ebp-248h]
  int v40; // [esp+30h] [ebp-244h] BYREF
  PSID Sid; // [esp+34h] [ebp-240h]
  int v42; // [esp+38h] [ebp-23Ch]
  char *v43; // [esp+3Ch] [ebp-238h]
  int v44; // [esp+40h] [ebp-234h]
  EVENT_DESCRIPTOR EventDescriptor; // [esp+48h] [ebp-22Ch] BYREF
  _BYTE v46[516]; // [esp+58h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+25Ch] [ebp-18h] BYREF

  v43 = a2;
  v35 = a1;
  Sid = a8;
  v42 = 0;
  Heap = (_EVENT_DATA_DESCRIPTOR *)v46;
  v36 = (_EVENT_DATA_DESCRIPTOR *)v46;
  v40 = 0;
  if ( (!a10 || a12) && (!a9 || a11) && v43 )
  {
    v15 = a9 + (a8 != 0) + 7;
    if ( a10 )
      ++v15;
    if ( v15 <= 0x20
      || (LODWORD(v33) = 16 * v15,
          v13 = 8,
          Heap = (_EVENT_DATA_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v33),
          (v36 = Heap) != 0) )
    {
      v39 = 0x80000000;
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
            v39 = -2145386496;
            v16 = 0;
            break;
          default:
            v16 = 0;
            if ( a5 == 16 )
              v39 = -2146435072;
            break;
        }
      }
      else
      {
        v16 = 0;
      }
      *(_DWORD *)&EventDescriptor.Id = 0;
      EventDescriptor.Level = v16;
      EventDescriptor.Task = a6;
      EventDescriptor.Opcode = 0;
      LODWORD(EventDescriptor.Keyword) = 0;
      HIDWORD(EventDescriptor.Keyword) = v39;
      ms_exc.registration.TryLevel = 0;
      if ( Sid )
      {
        if ( !RtlValidSid(Sid) )
        {
          v13 = 87;
          v42 = 87;
          _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
          goto LABEL_4;
        }
        v40 = 4 * *((unsigned __int8 *)Sid + 1) + 8;
      }
      while ( 1 )
      {
        v39 = MEMORY[0x7FFE0018];
        v38[1] = MEMORY[0x7FFE0014];
        if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
          break;
        _mm_pause();
      }
      v34[0] = MEMORY[0x7FFE0014];
      v34[1] = MEMORY[0x7FFE0018];
      LODWORD(Heap->Ptr) = v34;
      HIDWORD(Heap->Ptr) = 0;
      Heap->Size = 8;
      Heap->Reserved = 0;
      LODWORD(Heap[1].Ptr) = &a7;
      HIDWORD(Heap[1].Ptr) = 0;
      Heap[1].Size = 4;
      Heap[1].Reserved = 0;
      v44 = 2;
      v17 = v43;
      v18 = v43;
      v43 += 2;
      do
      {
        v19 = *(_WORD *)v18;
        v18 += 2;
      }
      while ( v19 );
      v38[0] = (unsigned __int16)(((v18 - v43) >> 1) + 1);
      LODWORD(Heap[2].Ptr) = v38;
      HIDWORD(Heap[2].Ptr) = 0;
      Heap[2].Size = 2;
      Heap[2].Reserved = 0;
      v20 = 2 * v38[0];
      LODWORD(Heap[3].Ptr) = v17;
      HIDWORD(Heap[3].Ptr) = 0;
      Heap[3].Size = v20;
      Heap[3].Reserved = 0;
      LODWORD(Heap[4].Ptr) = &v40;
      HIDWORD(Heap[4].Ptr) = 0;
      Heap[4].Size = 2;
      Heap[4].Reserved = 0;
      v21 = 5;
      v44 = 5;
      v22 = v40;
      if ( v40 )
      {
        LODWORD(Heap[5].Ptr) = Sid;
        HIDWORD(Heap[5].Ptr) = 0;
        Heap[5].Size = v22;
        Heap[5].Reserved = 0;
        v21 = 6;
        v44 = 6;
      }
      v23 = &Heap[v21];
      LODWORD(v23->Ptr) = &a9;
      HIDWORD(v23->Ptr) = 0;
      v23->Size = 2;
      v23->Reserved = 0;
      v24 = v21 + 1;
      v44 = v24;
      for ( i = 0; ; i = v37 + 1 )
      {
        v37 = i;
        v26 = v24++;
        if ( i >= a9 )
          break;
        Sid = *(PSID *)(a11 + 4 * i);
        v27 = (char *)Sid;
        v43 = (char *)Sid + 2;
        do
        {
          v28 = *(_WORD *)v27;
          v27 += 2;
        }
        while ( v28 );
        v29 = v27 - v43;
        LODWORD(Heap[v26].Ptr) = Sid;
        HIDWORD(Heap[v26].Ptr) = 0;
        Heap[v26].Size = 2 * (v29 >> 1) + 2;
        Heap[v26].Reserved = 0;
        v44 = v24;
      }
      LODWORD(Heap[v26].Ptr) = &a10;
      HIDWORD(Heap[v26].Ptr) = 0;
      Heap[v26].Size = 4;
      Heap[v26].Reserved = 0;
      v44 = v24;
      v30 = a10;
      if ( a10 )
      {
        v31 = &Heap[v24];
        LODWORD(v31->Ptr) = a12;
        HIDWORD(v31->Ptr) = 0;
        v31->Size = v30;
        v31->Reserved = 0;
        v44 = ++v24;
      }
      if ( v35 )
        v32 = EtwWriteUMSecurityEvent(&EventDescriptor, 4u, v24, Heap);
      else
        v32 = EtwpEventWriteFull((int *)&EventDescriptor, 0, a3, a4, 0, 0, 4, 0, 0, v24, (int)Heap);
      v13 = v32;
      v42 = v32;
      ms_exc.registration.TryLevel = -2;
      if ( Heap != (_EVENT_DATA_DESCRIPTOR *)v46 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        v13 = v42;
      }
    }
  }
  else
  {
    v13 = 87;
  }
LABEL_4:
  RtlSetLastWin32Error(v13);
  return v13 == 0;
}
