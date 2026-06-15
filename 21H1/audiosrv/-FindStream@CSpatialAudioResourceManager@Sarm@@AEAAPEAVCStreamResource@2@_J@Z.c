/*
 * XREFs of ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180107134
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180107A28 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180107B44 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180108270 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 * Callees:
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x180107528 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 */

struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::FindStream(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2)
{
  char *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct Sarm::CStreamResource *result; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx

  v2 = (char *)this + 232;
  if ( *((_QWORD *)this + 30) && (v4 = 0LL, *((_DWORD *)this + 62)) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v4);
      if ( v5 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)v2 + 4) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0LL;
  }
  result = 0LL;
  *((_QWORD *)v2 + 9) = v5;
  if ( v5 )
    result = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(v2);
  while ( result && *((_QWORD *)result + 5) != a2 )
  {
    v7 = *((_QWORD *)v2 + 9);
    result = 0LL;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 104);
      if ( !v8 )
      {
        v9 = (unsigned int)(*(_DWORD *)(v7 + 112) % *((_DWORD *)v2 + 4) + 1);
        do
        {
          if ( (unsigned int)v9 >= *((_DWORD *)v2 + 4) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8 * v9) )
            v8 = *(_QWORD *)(*(_QWORD *)v2 + 8 * v9);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( !v8 );
      }
      *((_QWORD *)v2 + 9) = v8;
      result = (struct Sarm::CStreamResource *)(v7 + 8);
    }
  }
  return result;
}
