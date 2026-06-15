/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x18012DE38
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x18012CFD4 (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18012D0D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x18012DAD8 (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::RuntimeClassInitialize(
        unsigned __int8 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        void *Src,
        size_t Size)
{
  unsigned __int16 *v7; // r12
  int v8; // ebx
  __int64 v9; // r15
  unsigned __int8 *v10; // rdi
  bool v11; // of
  SIZE_T v12; // rax
  void *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  int Dictionary; // eax
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 *v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  LOWORD(v20) = a4;
  v7 = a5;
  v8 = 0;
  v9 = a3;
  v10 = a1;
  if ( !Src )
  {
    Dictionary = SpatialAudioMetadataDictionary::LoadDictionary((__int64)a1, a2, a3, a4, a5);
    v8 = Dictionary;
    if ( Dictionary < 0 )
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v20) = Dictionary;
        LODWORD(Src) = 147;
        v18 = (__int64)"SpatialAudioMetadataDictionary::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_18019D4B0,
          byte_18016D305,
          a3,
          a4,
          (const CHAR **)&v18,
          (__int64)&Src,
          (__int64)&v20);
      }
LABEL_16:
      if ( v8 >= 0 )
        return (unsigned int)v8;
      goto LABEL_17;
    }
LABEL_11:
    *((_DWORD *)v10 + 24) = 0;
    *((_DWORD *)v10 + 25) = 0;
    if ( *((_DWORD *)v10 + 31) )
    {
      v14 = 0;
      a4 = *((unsigned int *)v10 + 31);
      LODWORD(a3) = 0;
      a1 = (unsigned __int8 *)(*((_QWORD *)v10 + 16) + 1LL);
      do
      {
        v15 = *a1;
        a3 = v15 + (_DWORD)a3 + 1;
        a1 += 2;
        *((_DWORD *)v10 + 24) = a3;
        if ( v14 <= v15 )
          v14 = v15;
        *((_DWORD *)v10 + 25) = v14;
        --a4;
      }
      while ( a4 );
    }
    goto LABEL_16;
  }
  if ( (Size & 1) != 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v20) = -2147024809;
      v18 = (__int64)"SpatialAudioMetadataDictionary::RuntimeClassInitialize";
      LODWORD(Src) = 137;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        a3,
        a4,
        (const CHAR **)&v18,
        (__int64)&Src,
        (__int64)&v20);
    }
    v8 = -2147024809;
    goto LABEL_17;
  }
  v12 = 2LL * ((unsigned int)Size >> 1);
  v11 = (((unsigned int)Size >> 1) * (unsigned __int128)2uLL) >> 64 != 0;
  *((_DWORD *)a1 + 31) = (unsigned int)Size >> 1;
  if ( v11 )
    v12 = -1LL;
  v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)v10 + 16) = v13;
  if ( v13 )
  {
    memcpy_0(v13, Src, (unsigned int)Size);
    goto LABEL_11;
  }
  v8 = -2147024882;
LABEL_17:
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    Src = v7;
    v18 = v9;
    LODWORD(v20) = v8;
    v19 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      (__int64)a1,
      byte_18016D381,
      a3,
      a4,
      (__int64)&v19,
      (__int64)&v20,
      &v18,
      &Src);
  }
  return (unsigned int)v8;
}
