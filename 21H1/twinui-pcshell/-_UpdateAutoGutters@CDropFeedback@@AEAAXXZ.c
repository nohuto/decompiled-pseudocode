/*
 * XREFs of ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x1804008B0
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804003C0 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18044D8F8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

void __fastcall CDropFeedback::_UpdateAutoGutters(CDropFeedback *this, const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  _DWORD *v2; // r12
  int v4; // r13d
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h] BYREF

  v2 = (_DWORD *)((char *)this + 72);
  v4 = ImmersiveApplicationLayout::ComputeGutterWidth((CDropFeedback *)((char *)this + 72), a2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 136LL))(*((_QWORD *)this + 16));
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &v14);
  v5 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      v6 = *((_QWORD *)this + 16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
             v6,
             v5,
             &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
             &v13) >= 0 )
        break;
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( ++v5 >= v14 )
        return;
    }
    v15 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 120LL))(v13, &v15);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13) & 0x100000) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
      if ( !v7 || v7 == 3 )
      {
        v8 = 24576;
        goto LABEL_9;
      }
    }
    v8 = 0;
LABEL_9:
    if ( v7 == 1 )
    {
      if ( v5 )
      {
        v12 = 0LL;
        v9 = *((_QWORD *)this + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 32LL))(
               v9,
               v5 - 1,
               &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
               &v12) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) == 1
            || (v16 = 0LL,
                (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 120LL))(v12, &v16),
                v4 + DWORD2(v16) != (_DWORD)v15) )
          {
            v8 |= 0x2000u;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      }
      else if ( (int)v15 > *v2 )
      {
        v8 |= 0x2000u;
      }
      if ( v5 + 1 >= v14 )
      {
        if ( SDWORD2(v15) < *((_DWORD *)this + 20) )
          v8 |= 0x4000u;
      }
      else
      {
        v12 = 0LL;
        v10 = *((_QWORD *)this + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v10 + 32LL))(
               v10,
               v5 + 1,
               &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
               &v12) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12) == 1
            || (v16 = 0LL,
                (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 120LL))(v12, &v16),
                (_DWORD)v16 - v4 != DWORD2(v15)) )
          {
            v8 |= 0x4000u;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      }
    }
    else if ( !v7 || v7 == 3 )
    {
      if ( (*(double (__fastcall **)(__int64))(*(_QWORD *)v13 + 144LL))(v13) == 0.0 )
      {
        v8 = 98304;
      }
      else
      {
        if ( !v5 && (int)v15 <= *v2 )
        {
          v8 &= ~0x2000u;
          if ( *((_BYTE *)this + 124) )
            v8 |= 0x8000u;
        }
        if ( v5 == v14 - 1 && SDWORD2(v15) >= *((_DWORD *)this + 20) )
        {
          v8 &= ~0x4000u;
          if ( *((_BYTE *)this + 124) )
            v8 |= 0x10000u;
        }
      }
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 112LL))(v13, v8 | v11 & 0xFFFE1FFF);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 184LL))(v13);
    goto LABEL_39;
  }
}
