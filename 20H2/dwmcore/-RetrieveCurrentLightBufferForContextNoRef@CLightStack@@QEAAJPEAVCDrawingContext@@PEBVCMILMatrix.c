/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180010FE0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180083230 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x180011274 (-GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV-$DynArrayIANoCtor@PE.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1800113F0 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x1800194EC (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18004C274 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18006FC14 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x180097EF8 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800B6D30 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EE9BF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v4; // r12d
  unsigned int v8; // ebx
  unsigned int CurrentVisual; // eax
  int v10; // r9d
  int DestLightsArray; // eax
  unsigned int v12; // ecx
  int v13; // r15d
  struct CHwLightCollectionBuffer *v14; // rax
  unsigned int v16; // edx
  const struct LightInfo *v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  void *v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  bool v27[16]; // [rsp+40h] [rbp-C0h] BYREF
  struct CHwLightCollectionBuffer **v28; // [rsp+50h] [rbp-B0h]
  void *Buf2[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+6Ch] [rbp-94h]
  _BYTE v32[24]; // [rsp+78h] [rbp-88h] BYREF
  struct LightInfo *v33[2]; // [rsp+90h] [rbp-70h] BYREF
  int v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A4h] [rbp-5Ch]
  unsigned int v36; // [rsp+A8h] [rbp-58h]
  _BYTE v37[720]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[168]; // [rsp+380h] [rbp+280h] BYREF
  int v39; // [rsp+428h] [rbp+328h]
  int v40; // [rsp+46Ch] [rbp+36Ch]

  v4 = 0;
  v28 = a4;
  *a4 = 0LL;
  v8 = 0;
  if ( !*((_DWORD *)this + 24) && *((_DWORD *)this + 6) )
  {
    v27[0] = 1;
    Buf2[0] = v32;
    Buf2[1] = v32;
    v30 = 3;
    v31 = 3LL;
    CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 24));
    DestLightsArray = CLightStack::GetDestLightsArray(
                        (_DWORD)this,
                        CurrentVisual,
                        *((_QWORD *)a2 + 741),
                        v10,
                        1,
                        (__int64)Buf2,
                        (__int64)v27);
    v8 = DestLightsArray;
    if ( DestLightsArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, DestLightsArray, 0x8Bu, 0LL);
      goto LABEL_9;
    }
    if ( !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 112, a3)
      || (v13 = HIDWORD(v31), *((_DWORD *)this + 52) != HIDWORD(v31))
      || memcmp_0(*((const void **)this + 23), Buf2[0], 8LL * HIDWORD(v31)) )
    {
      ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 104);
      v13 = HIDWORD(v31);
    }
    v14 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
    if ( v14 )
      goto LABEL_8;
    v16 = 0;
    v33[1] = (struct LightInfo *)v37;
    v34 = 3;
    v17 = (const struct LightInfo *)v37;
    v35 = 3;
    v33[0] = (struct LightInfo *)v37;
    v36 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        v39 = 0;
        v40 = 0;
        v18 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _BYTE *))(**((_QWORD **)Buf2[0] + v4) + 224LL))(
                *((_QWORD *)Buf2[0] + v4),
                a2,
                a3,
                v38);
        v8 = v18;
        if ( v18 < 0 )
          break;
        v20 = DynArray<LightInfo,0>::AddMultipleAndSet(v33, v38);
        v8 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xA2u, 0LL);
          goto LABEL_24;
        }
        if ( ++v4 >= HIDWORD(v31) )
        {
          v16 = v36;
          v17 = v33[0];
          goto LABEL_16;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xA0u, 0LL);
    }
    else
    {
LABEL_16:
      v22 = CHwLightCollectionBuffer::Create(v17, v16, v27[0], (struct CHwLightCollectionBuffer **)this + 13);
      v8 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xAAu, 0LL);
      }
      else
      {
        *((_OWORD *)this + 7) = *(_OWORD *)a3;
        *((_OWORD *)this + 8) = *((_OWORD *)a3 + 1);
        *((_OWORD *)this + 9) = *((_OWORD *)a3 + 2);
        *((_OWORD *)this + 10) = *((_OWORD *)a3 + 3);
        *((_DWORD *)this + 44) = *((_DWORD *)a3 + 16);
        v24 = (void *)*((_QWORD *)this + 23);
        if ( v24 != *((void **)this + 24) )
        {
          operator delete(v24);
          *((_QWORD *)this + 23) = 0LL;
        }
        *(_QWORD *)((char *)this + 204) = v31;
        v25 = DynArrayImpl<0>::DetachData(Buf2, 8LL, (char *)this + 184);
        v8 = v25;
        if ( v25 >= 0 )
        {
          DynArrayImpl<0>::~DynArrayImpl<0>(v33);
          v14 = (struct CHwLightCollectionBuffer *)*((_QWORD *)this + 13);
LABEL_8:
          *v28 = v14;
LABEL_9:
          DynArrayImpl<0>::~DynArrayImpl<0>(Buf2);
          return v8;
        }
        *(_QWORD *)((char *)this + 204) = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xADu, 0LL);
      }
    }
LABEL_24:
    DynArrayImpl<0>::~DynArrayImpl<0>(v33);
    goto LABEL_9;
  }
  return v8;
}
