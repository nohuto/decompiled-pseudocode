/*
 * XREFs of @EtwpTraceUmEvent@20 @ 0x4B381076
 * Callers:
 *     _EtwLogTraceEvent@12 @ 0x4B380CF0 (_EtwLogTraceEvent@12.c)
 *     _EtwTraceEventInstance@20 @ 0x4B380D50 (_EtwTraceEventInstance@20.c)
 * Callees:
 *     _EtwpReserveTraceBuffer@20 @ 0x4B2EFD10 (_EtwpReserveTraceBuffer@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     @EtwpRelogEvent@8 @ 0x4B380EC6 (@EtwpRelogEvent@8.c)
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

int __fastcall EtwpTraceUmEvent(void *a1, size_t a2, unsigned __int16 a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  size_t v7; // ecx
  size_t v8; // esi
  int v9; // edi
  int v10; // eax
  size_t v11; // esi
  size_t v12; // edx
  size_t v13; // esi
  size_t i; // ecx
  int *v15; // ecx
  size_t v16; // edi
  _DWORD *v17; // eax
  _DWORD *v18; // esi
  size_t j; // eax
  int v20; // eax
  const void *v21; // ecx
  size_t v22; // eax
  _DWORD *v23; // edi
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // ecx
  struct _TEB *v27; // edx
  _DWORD *v28; // ecx
  unsigned int Reserved; // [esp-Ch] [ebp-188h]
  int v30; // [esp+10h] [ebp-16Ch]
  int v31; // [esp+18h] [ebp-164h] BYREF
  int v32; // [esp+1Ch] [ebp-160h]
  int v33; // [esp+24h] [ebp-158h] BYREF
  size_t v34; // [esp+28h] [ebp-154h]
  size_t v35; // [esp+2Ch] [ebp-150h]
  int v36; // [esp+30h] [ebp-14Ch]
  void *v37; // [esp+34h] [ebp-148h]
  size_t Size; // [esp+38h] [ebp-144h]
  size_t v39; // [esp+3Ch] [ebp-140h]
  void *Src; // [esp+40h] [ebp-13Ch]
  size_t v41; // [esp+44h] [ebp-138h] BYREF
  int v42; // [esp+48h] [ebp-134h]
  void *v43; // [esp+4Ch] [ebp-130h]
  int v44; // [esp+50h] [ebp-12Ch]
  char v45; // [esp+57h] [ebp-125h]
  _QWORD v46[33]; // [esp+58h] [ebp-124h] BYREF
  CPPEH_RECORD ms_exc; // [esp+164h] [ebp-18h]

  Size = a2;
  v43 = a1;
  v33 = 0;
  v5 = 0;
  v42 = 0;
  v35 = 0;
  v31 = 0;
  v32 = 0;
  v41 = a3 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201;
  if ( (a3 & 0x7FFFu) < 0x40 || (result = EtwpDemuxUmTraceHandle(a3, &v41)) == 0 )
  {
    v7 = v41;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v41 + 4));
    v5 = *(_DWORD *)(EtwpLoggerArray + 8 * v7);
    if ( (v5 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 4));
      return 4201;
    }
    v42 = *(_DWORD *)(EtwpLoggerArray + 8 * v7);
    result = 0;
  }
  v44 = result;
  if ( !result )
  {
    ms_exc.registration.TryLevel = 0;
    v8 = *(unsigned __int16 *)v43;
    v39 = v8;
    if ( v8 >= Size )
    {
      v9 = *((_DWORD *)v43 + 11);
      v30 = v9;
      if ( (v9 & 0x200000) != 0 )
      {
        v10 = EtwpRelogEvent((_DWORD *)v5, (int)v43);
      }
      else
      {
        v36 = v9 & 0x100000;
        if ( (v9 & 0x100000) != 0 )
        {
          Src = (char *)v43 + Size;
          v11 = v8 - Size;
          if ( v11 > 0x100 )
          {
            v44 = 13;
            goto LABEL_46;
          }
          memset(v46, 0, 0x100u);
          if ( v11 )
            memcpy(v46, Src, v11);
          v12 = Size;
          v39 = Size;
          v13 = v11 >> 4;
          v35 = v13;
          for ( i = 0; i < v13; ++i )
          {
            v12 += LODWORD(v46[2 * i + 1]);
            v39 = v12;
            if ( v12 < LODWORD(v46[2 * i + 1]) )
            {
              v44 = 234;
              goto LABEL_46;
            }
          }
        }
        if ( (v9 & 0x200) != 0 )
        {
          v45 = 1;
          v15 = 0;
        }
        else
        {
          v45 = 0;
          v15 = &v31;
        }
        Reserved = NtCurrentTeb()->CurrentIdealProcessor.Reserved;
        v16 = v39;
        v41 = v39;
        v5 = v42;
        v17 = (_DWORD *)EtwpReserveTraceBuffer(v42, v39, Reserved, v15, &v33);
        v18 = v17;
        Src = v17;
        if ( v17 )
        {
          ms_exc.registration.TryLevel = 1;
          if ( v36 )
          {
            v37 = (char *)v17 + Size;
            memcpy(v17, v43, Size);
            for ( j = 0; ; j = v34 + 1 )
            {
              v34 = j;
              if ( j >= v35 )
                break;
              v20 = 2 * j;
              v21 = (const void *)v46[v20];
              v22 = v46[v20 + 1];
              v36 = v22;
              if ( v21 && v22 )
              {
                memcpy(v37, v21, v22);
                v37 = (char *)v37 + v36;
              }
            }
          }
          else
          {
            memcpy(v17, v43, v16);
          }
          if ( (v30 & 0x80000) != 0 )
          {
            v23 = v18 + 6;
            v24 = (_DWORD *)*((_DWORD *)v43 + 6);
            *v23 = *v24++;
            *++v23 = *v24++;
            *++v23 = *v24;
            v23[1] = v24[1];
            v18 = Src;
            v16 = v41;
          }
          if ( !v45 )
          {
            v25 = v31;
            v18[4] = v31;
            v26 = v32;
            v18[5] = v32;
            if ( *(_DWORD *)(v5 + 16) == 3 )
            {
              v18[10] = v25;
              v18[11] = v26;
            }
            else
            {
              *((_QWORD *)v18 + 5) = __rdtsc();
            }
          }
          *v18 = a5 | v16;
          v27 = NtCurrentTeb();
          v28 = Src;
          *((_DWORD *)Src + 2) = v27->ClientId.UniqueThread;
          v28[3] = v27->ClientId.UniqueProcess;
          ms_exc.registration.TryLevel = 0;
          _InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
          v5 = v42;
          goto LABEL_46;
        }
        if ( v16 <= 0xFFF8 )
          v10 = *(_DWORD *)(v5 + 144) < v16 ? 234 : 8;
        else
          v10 = 534;
      }
      v44 = v10;
    }
    else
    {
      v44 = 87;
    }
LABEL_46:
    ms_exc.registration.TryLevel = -2;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v5 + 20) + 4));
    return v44;
  }
  return result;
}
