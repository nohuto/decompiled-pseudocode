/*
 * XREFs of ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x1801ED570
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801F0ECC (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetRenderingEffectState(
        CD3DBatchExecutionContext *this,
        const struct CRenderingEffect *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rdi
  int v10; // r9d
  int v11; // r8d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 6) && !*((_BYTE *)this + 80) )
  {
    v4 = *((_QWORD *)this + 4);
    v5 = *((_QWORD *)this + 2);
    v16 = *(_QWORD *)(v4 + 416);
    (*(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64 *))(*(_QWORD *)v5 + 56LL))(v5, 2LL, 1LL, &v16);
    v17 = *(_QWORD *)(*((_QWORD *)this + 4) + 704LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      1LL,
      1LL,
      &v17);
    *((_BYTE *)this + 80) = 1;
  }
  v6 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, char *))(*(_QWORD *)a2 + 32LL))(
         a2,
         this,
         (char *)this + 68);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x1BFu);
  }
  else
  {
    v9 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v9 + 168) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 560LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 560LL),
        *(_QWORD *)(v9 + 160),
        0LL,
        0LL,
        v9 + 176,
        0,
        0);
      *(_BYTE *)(v9 + 168) = 0;
    }
    v10 = *((_DWORD *)this + 17);
    if ( v10 >= 0 )
    {
      v11 = *((_DWORD *)this + 17) & 4;
      LOBYTE(v16) = v11 != 0;
      BYTE1(v16) = (v10 & 8) != 0;
      BYTE2(v16) = (v10 & 2) != 0;
      BYTE3(v16) = (v10 & 0x10) != 0;
      HIDWORD(v16) = (v10 & 1) != 0 ? 4 : 2;
      v12 = HIDWORD(v16);
      v13 = v16 >> 24;
      BYTE1(v16) = BYTE3(v16);
      if ( (_BYTE)v16 != *((_BYTE *)this + 72)
        || (_BYTE)v13 != *((_BYTE *)this + 73)
        || (_DWORD)v12 != *((_DWORD *)this + 19) )
      {
        if ( (_DWORD)v12 == 2 )
        {
          v14 = v11 != 0 ? 2 : 0;
        }
        else if ( (_DWORD)v12 == 4 )
        {
          v14 = v11 != 0 ? 3LL : 1LL;
        }
        else
        {
          v14 = 4LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
          *((_QWORD *)this + 2),
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v14 + (-(__int64)((_BYTE)v13 != 0) & 4) + 199)));
        *((_QWORD *)this + 9) = v16;
        *((_BYTE *)this + 81) = 1;
      }
    }
  }
  return v8;
}
