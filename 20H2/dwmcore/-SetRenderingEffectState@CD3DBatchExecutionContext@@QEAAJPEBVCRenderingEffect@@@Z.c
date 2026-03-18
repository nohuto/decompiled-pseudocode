/*
 * XREFs of ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x1801A6C14
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801A9E80 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetRenderingEffectState(
        CD3DBatchExecutionContext *this,
        const struct CRenderingEffect *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // edx
  unsigned __int8 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF

  if ( *((_QWORD *)this + 6) && !*((_BYTE *)this + 80) )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 4) + 416LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64 *))(**((_QWORD **)this + 2) + 56LL))(
      *((_QWORD *)this + 2),
      2LL,
      1LL,
      &v16);
    v17 = *(_QWORD *)(*((_QWORD *)this + 4) + 704LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      1LL,
      1LL,
      &v17);
    *((_BYTE *)this + 80) = 1;
  }
  v4 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, char *))(*(_QWORD *)a2 + 40LL))(
         a2,
         this,
         (char *)this + 68);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1BFu, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v7 + 168) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 600LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 600LL),
        *(_QWORD *)(v7 + 160),
        0LL,
        0LL,
        v7 + 176,
        0,
        0);
      *(_BYTE *)(v7 + 168) = 0;
    }
    v8 = *((_DWORD *)this + 17);
    if ( v8 >= 0 )
    {
      BYTE1(v16) = (v8 & 8) != 0;
      v9 = (v8 & 4) != 0;
      LOBYTE(v16) = v9;
      BYTE2(v16) = (v8 & 2) != 0;
      BYTE3(v16) = (v8 & 0x10) != 0;
      HIDWORD(v16) = (v8 & 1) != 0 ? 4 : 2;
      v10 = v16;
      v11 = v16;
      LOBYTE(v16) = v9;
      v12 = HIDWORD(v11);
      v13 = v10 >> 24;
      HIDWORD(v16) = v12;
      BYTE1(v16) = v13;
      if ( v9 != *((_BYTE *)this + 72) || (_BYTE)v13 != *((_BYTE *)this + 73) || (_DWORD)v12 != *((_DWORD *)this + 19) )
      {
        if ( (_DWORD)v12 == 2 )
        {
          v14 = 16LL * v9;
        }
        else if ( (_DWORD)v12 == 4 )
        {
          v14 = 16LL * v9 + 8;
        }
        else
        {
          v14 = 32LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
          *((_QWORD *)this + 2),
          *(_QWORD *)(v14 + ((_BYTE)v13 != 0 ? 1552LL : 1520LL) + *((_QWORD *)this + 1)));
        *((_QWORD *)this + 9) = v16;
        *((_BYTE *)this + 81) = 1;
      }
    }
  }
  return v6;
}
