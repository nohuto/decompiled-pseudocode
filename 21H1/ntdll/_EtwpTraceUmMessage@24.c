/*
 * XREFs of _EtwpTraceUmMessage@24 @ 0x4B2EFAD2
 * Callers:
 *     _EtwTraceMessageVa@24 @ 0x4B2EA130 (_EtwTraceMessageVa@24.c)
 * Callees:
 *     _EtwpTraceUmMessage@24 @ 0x4B2EFAD2 (_EtwpTraceUmMessage@24.c)
 *     _EtwpReserveTraceBuffer@20 @ 0x4B2EFD10 (_EtwpReserveTraceBuffer@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

int __fastcall EtwpTraceUmMessage(char a1, _DWORD *a2, unsigned __int16 a3, int a4, __int16 a5, _DWORD *a6)
{
  int v7; // ecx
  int v8; // ebx
  int result; // eax
  int v10; // edx
  unsigned int v11; // edx
  _DWORD *i; // ecx
  int v13; // edx
  volatile signed __int32 *v14; // ecx
  size_t *v15; // esi
  __int16 v16; // cx
  int *v17; // ebx
  _DWORD *v18; // esi
  struct _TEB *v19; // ecx
  void **v20; // ebx
  size_t *v21; // esi
  const void *v22; // eax
  size_t v23; // esi
  int v24; // eax
  int v25; // [esp+10h] [ebp-58h] BYREF
  int v26; // [esp+14h] [ebp-54h]
  int v27; // [esp+1Ch] [ebp-4Ch] BYREF
  int v28; // [esp+20h] [ebp-48h]
  int v29; // [esp+24h] [ebp-44h]
  int v30; // [esp+28h] [ebp-40h]
  size_t *v31; // [esp+2Ch] [ebp-3Ch]
  int v32; // [esp+30h] [ebp-38h]
  _DWORD *v33; // [esp+34h] [ebp-34h]
  int v34; // [esp+38h] [ebp-30h]
  int v35; // [esp+3Ch] [ebp-2Ch] BYREF
  int v36; // [esp+40h] [ebp-28h]
  unsigned int v37; // [esp+44h] [ebp-24h]
  int v38; // [esp+48h] [ebp-20h]
  void **v39; // [esp+4Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]
  size_t *v41; // [esp+7Ch] [ebp+14h]

  v33 = a2;
  v25 = 0;
  v26 = 0;
  v35 = a3 & 0x7FFF;
  if ( !EtwpLoggerArray )
    return 4201;
  if ( (a3 & 0x7FFFu) < 0x40 || (result = EtwpDemuxUmTraceHandle(a3, &v35)) == 0 )
  {
    v7 = v35;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v35 + 4));
    v8 = *(_DWORD *)(EtwpLoggerArray + 8 * v7);
    if ( (v8 & 1) == 0 )
    {
      v38 = *(_DWORD *)(EtwpLoggerArray + 8 * v7);
      result = 0;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 4));
    return 4201;
  }
  v8 = v38;
LABEL_5:
  v36 = result;
  if ( !result )
  {
    v10 = a1 & 0x18;
    v32 = v10;
    if ( !*(_DWORD *)(v8 + 284) )
      a1 &= ~1u;
    v30 = a1 & 1;
    v34 = a1 & 2;
    v29 = a1 & 4;
    v28 = a1 & 0x20;
    v11 = (v10 != 0 ? 8 : 0) + (v34 != 0 ? 24 : 8) + (v29 != 0 ? 4 : 0) + (v28 != 0 ? 8 : 0) + 4 * v30;
    for ( i = a6; ; v11 += *(i - 1) )
    {
      v37 = v11;
      if ( !*i )
        break;
      i += 2;
      if ( v11 + *(i - 1) < v11 )
        return 534;
    }
    ms_exc.registration.TryLevel = 0;
    v13 = EtwpReserveTraceBuffer(NtCurrentTeb()->CurrentIdealProcessor.Reserved, v32 != 0 ? &v25 : 0, &v27);
    v35 = 0;
    v14 = *(volatile signed __int32 **)(v8 + 284);
    v15 = a6;
    if ( v14 )
      v35 = _InterlockedIncrement(v14);
    v16 = v37;
    if ( !v13 )
    {
      if ( v37 <= 0xFFF8 )
        v24 = *(_DWORD *)(v38 + 144) < v37 ? 234 : 8;
      else
        v24 = 534;
      v36 = v24;
LABEL_29:
      ms_exc.registration.TryLevel = -2;
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v38 + 20) + 4));
      return v36;
    }
    *(_DWORD *)v13 = -1879048192;
    *(_WORD *)v13 = v16;
    *(_WORD *)(v13 + 6) = a1 & 0x3F | 0x40;
    *(_WORD *)(v13 + 4) = a5;
    v17 = (int *)(v13 + 8);
    v39 = (void **)(v13 + 8);
    ms_exc.registration.TryLevel = 1;
    if ( v30 )
    {
      *v17 = v35;
      v17 = (int *)(v13 + 12);
      v39 = (void **)(v13 + 12);
    }
    if ( v29 )
    {
      *v17++ = *v33;
    }
    else
    {
      if ( !v34 )
      {
LABEL_21:
        if ( v32 )
        {
          *v17 = v25;
          v17[1] = v26;
          v17 += 2;
          v39 = (void **)v17;
        }
        if ( v28 )
        {
          v19 = NtCurrentTeb();
          v20 = v39;
          *v39 = v19->ClientId.UniqueThread;
          v39 = ++v20;
          *v20 = v19->ClientId.UniqueProcess;
          v17 = (int *)(v20 + 1);
          v39 = (void **)v17;
        }
        v31 = v15;
        while ( 1 )
        {
          v21 = v15 + 1;
          v31 = v21;
          v22 = (const void *)*(v21 - 1);
          if ( !v22 )
            break;
          v41 = v21 + 1;
          v31 = v21 + 1;
          v23 = *v21;
          memcpy(v17, v22, v23);
          v17 = (int *)((char *)v17 + v23);
          v39 = (void **)v17;
          v15 = v41;
        }
        ms_exc.registration.TryLevel = 0;
        _InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
        goto LABEL_29;
      }
      v18 = v33;
      *v17 = *v33;
      v17[1] = *++v18;
      v17[2] = *++v18;
      v17[3] = v18[1];
      v17 += 4;
      v15 = a6;
    }
    v39 = (void **)v17;
    goto LABEL_21;
  }
  return result;
}
