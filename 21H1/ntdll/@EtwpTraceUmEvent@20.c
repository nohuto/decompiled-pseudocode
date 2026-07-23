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

int __fastcall EtwpTraceUmEvent(void *a1, unsigned int a2, unsigned __int16 a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // esi
  unsigned int i; // ecx
  LARGE_INTEGER *v15; // ecx
  unsigned int v16; // edi
  _DWORD *v17; // eax
  _DWORD *v18; // esi
  unsigned int j; // eax
  int v20; // eax
  const void *v21; // ecx
  int v22; // eax
  _DWORD *v23; // edi
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // ecx
  struct _TEB *v27; // edx
  _DWORD *v28; // ecx
  unsigned int Reserved; // [esp-Ch] [ebp-188h]
  size_t v30; // [esp-4h] [ebp-180h]
  size_t v31; // [esp-4h] [ebp-180h]
  int v32; // [esp+10h] [ebp-16Ch]
  int v33; // [esp+18h] [ebp-164h] BYREF
  int v34; // [esp+1Ch] [ebp-160h]
  int v35; // [esp+24h] [ebp-158h] BYREF
  unsigned int v36; // [esp+28h] [ebp-154h]
  unsigned int v37; // [esp+2Ch] [ebp-150h]
  int v38; // [esp+30h] [ebp-14Ch]
  void *v39; // [esp+34h] [ebp-148h]
  unsigned int Size; // [esp+38h] [ebp-144h]
  unsigned int Size_4; // [esp+3Ch] [ebp-140h]
  void *Src; // [esp+40h] [ebp-13Ch]
  int v43; // [esp+44h] [ebp-138h] BYREF
  int v44; // [esp+48h] [ebp-134h]
  void *v45; // [esp+4Ch] [ebp-130h]
  int v46; // [esp+50h] [ebp-12Ch]
  char v47; // [esp+57h] [ebp-125h]
  void *v48[2]; // [esp+58h] [ebp-124h] BYREF
  _DWORD v49[65]; // [esp+60h] [ebp-11Ch]
  CPPEH_RECORD ms_exc; // [esp+164h] [ebp-18h]

  Size = a2;
  v45 = a1;
  v35 = 0;
  v5 = 0;
  v44 = 0;
  v37 = 0;
  v33 = 0;
  v34 = 0;
  v43 = a3 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201;
  if ( (a3 & 0x7FFFu) < 0x40 || (result = EtwpDemuxUmTraceHandle(a3, &v43)) == 0 )
  {
    v7 = v43;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v43 + 4));
    v5 = *(_DWORD *)(EtwpLoggerArray + 8 * v7);
    if ( (v5 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 4));
      return 4201;
    }
    v44 = *(_DWORD *)(EtwpLoggerArray + 8 * v7);
    result = 0;
  }
  v46 = result;
  if ( !result )
  {
    ms_exc.registration.TryLevel = 0;
    v8 = *(unsigned __int16 *)v45;
    Size_4 = v8;
    if ( v8 >= Size )
    {
      v9 = *((_DWORD *)v45 + 11);
      v32 = v9;
      if ( (v9 & 0x200000) != 0 )
      {
        v10 = EtwpRelogEvent((_DWORD *)v5, (int)v45);
      }
      else
      {
        v38 = v9 & 0x100000;
        if ( (v9 & 0x100000) != 0 )
        {
          Src = (char *)v45 + Size;
          v11 = v8 - Size;
          if ( v11 > 0x100 )
          {
            v46 = 13;
            goto LABEL_46;
          }
          LODWORD(v30) = 256;
          memset(v48, 0, v30);
          if ( v11 )
          {
            LODWORD(v30) = v11;
            memcpy(v48, Src, v30);
          }
          v12 = Size;
          Size_4 = Size;
          v13 = v11 >> 4;
          v37 = v13;
          for ( i = 0; i < v13; ++i )
          {
            v12 += v49[4 * i];
            Size_4 = v12;
            if ( v12 < v49[4 * i] )
            {
              v46 = 234;
              goto LABEL_46;
            }
          }
        }
        if ( (v9 & 0x200) != 0 )
        {
          v47 = 1;
          v15 = 0;
        }
        else
        {
          v47 = 0;
          v15 = (LARGE_INTEGER *)&v33;
        }
        Reserved = NtCurrentTeb()->CurrentIdealProcessor.Reserved;
        v16 = Size_4;
        v43 = Size_4;
        v5 = v44;
        v17 = (_DWORD *)EtwpReserveTraceBuffer(v44, Size_4, Reserved, v15, &v35);
        v18 = v17;
        Src = v17;
        if ( v17 )
        {
          ms_exc.registration.TryLevel = 1;
          if ( v38 )
          {
            v39 = (char *)v17 + Size;
            LODWORD(v30) = Size;
            memcpy(v17, v45, v30);
            for ( j = 0; ; j = v36 + 1 )
            {
              v36 = j;
              if ( j >= v37 )
                break;
              v20 = 2 * j;
              v21 = v48[2 * v20];
              v22 = v49[2 * v20];
              v38 = v22;
              if ( v21 && v22 )
              {
                LODWORD(v31) = v22;
                memcpy(v39, v21, v31);
                v39 = (char *)v39 + v38;
              }
            }
          }
          else
          {
            LODWORD(v30) = v16;
            memcpy(v17, v45, v30);
          }
          if ( (v32 & 0x80000) != 0 )
          {
            v23 = v18 + 6;
            v24 = (_DWORD *)*((_DWORD *)v45 + 6);
            *v23 = *v24++;
            *++v23 = *v24++;
            *++v23 = *v24;
            v23[1] = v24[1];
            v18 = Src;
            v16 = v43;
          }
          if ( !v47 )
          {
            v25 = v33;
            v18[4] = v33;
            v26 = v34;
            v18[5] = v34;
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
          _InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
          v5 = v44;
          goto LABEL_46;
        }
        if ( v16 <= 0xFFF8 )
          v10 = *(_DWORD *)(v5 + 144) < v16 ? 234 : 8;
        else
          v10 = 534;
      }
      v46 = v10;
    }
    else
    {
      v46 = 87;
    }
LABEL_46:
    ms_exc.registration.TryLevel = -2;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v5 + 20) + 4));
    return v46;
  }
  return result;
}
