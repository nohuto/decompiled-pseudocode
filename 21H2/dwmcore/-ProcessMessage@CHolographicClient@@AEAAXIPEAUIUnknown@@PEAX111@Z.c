/*
 * XREFs of ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x18025BBAC
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x18025AA70 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E9464 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B55C (-ProcessAddComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B5C8 (-ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B6C8 (-ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B754 (-ProcessAddExclusivePresentData@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B7C4 (-ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B890 (-ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B978 (-ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025BA94 (-ProcessAddWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025BAF4 (-ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessInitializeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025BB44 (-ProcessInitializeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025BF54 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025BFE0 (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C058 (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C0E8 (-ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C174 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C20C (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C298 (-ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C328 (-ProcessRemoveWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C388 (-ProcessResizeTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessResizeWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C3E8 (-ProcessResizeWin32kTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C448 (-ProcessUpdateComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C4B4 (-ProcessUpdateDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C520 (-ProcessUpdateViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessMessage(
        CHolographicClient *this,
        unsigned int a2,
        struct IUnknown *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7)
{
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  __int64 v27; // rdx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  struct IUnknown *v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  struct IUnknown *v38; // [rsp+30h] [rbp-38h] BYREF
  __int128 v39; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int128 v40; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 > 0xF )
  {
    if ( a2 > 0x1A )
    {
      v33 = a2 - 27;
      if ( (_DWORD)v33 )
      {
        v34 = v33 - 2;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                if ( v37 != 1 )
                  goto LABEL_66;
                CHolographicClient::ProcessResizeWin32kTexture(this, a3);
              }
              else
              {
                CHolographicClient::ProcessRemoveWin32kTexture(this, a3);
              }
            }
            else
            {
              CHolographicClient::ProcessAddWin32kTexture(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessRemoveExclusiveModeProxy(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessAddExclusiveModeProxy(this, a3);
        }
      }
      else
      {
        LODWORD(v33) = (unsigned __int8)a4;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 232LL))(*((_QWORD *)this + 3), v33);
      }
    }
    else if ( a2 == 26 )
    {
      CHolographicClient::ProcessRemoveViewer(this, a3);
    }
    else
    {
      v26 = a2 - 18;
      if ( v26 )
      {
        v27 = v26 - 2;
        if ( (_DWORD)v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                v31 = v30 - 1;
                if ( v31 )
                {
                  if ( v31 != 1 )
                    goto LABEL_66;
                  CHolographicClient::ProcessUpdateViewer(this, a3);
                }
                else
                {
                  CHolographicClient::ProcessAddViewer(this, a3);
                }
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 144LL))(
                  *((_QWORD *)this + 3),
                  (unsigned int)a4);
              }
            }
            else
            {
              CHolographicClient::ProcessAddExclusivePresentData(this, a3);
            }
          }
          else
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
            *((_DWORD *)this + 62) = 0;
            DynArrayImpl<0>::ShrinkToSize((__int64)this + 224, 0x20u);
          }
        }
        else
        {
          v32 = (struct IUnknown *)*((_QWORD *)this + 26);
          if ( v32 != a3 )
          {
            if ( a3 )
            {
              ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *, void *))a3->lpVtbl->AddRef)(
                a3,
                v27,
                a3,
                a4);
              v32 = (struct IUnknown *)*((_QWORD *)this + 26);
            }
            v38 = v32;
            *((_QWORD *)this + 26) = a3;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
          }
        }
      }
      else if ( a4 )
      {
        SetEvent(a4);
      }
    }
  }
  else if ( a2 == 15 )
  {
    CHolographicClient::ProcessReleaseExclusiveSwapChain(this, a3);
  }
  else if ( a2 > 8 )
  {
    v21 = a2 - 9;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 != 1 )
                goto LABEL_66;
              CHolographicClient::ProcessAttachExclusiveSwapChain(this, a3);
            }
            else
            {
              CHolographicClient::ProcessRemoveExclusiveView(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessAddExclusiveView(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessUpdateComposition(this, a3);
        }
      }
      else
      {
        CHolographicClient::ProcessRemoveComposition(this, a3);
      }
    }
    else
    {
      CHolographicClient::ProcessAddComposition(this, a3);
    }
  }
  else if ( a2 == 8 )
  {
    CHolographicClient::ProcessUpdateDisplay(this, a3);
  }
  else
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                {
                  CHolographicClient::ProcessRemoveDisplay(this, a3);
                  return;
                }
LABEL_66:
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x1B8,
                  (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
                  (const char *)a4);
                __debugbreak();
              }
              CHolographicClient::ProcessAddDisplay(this, a3);
            }
            else
            {
              *((_QWORD *)&v39 + 1) = a5;
              v40 = __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6);
              v15 = *((_DWORD *)this + 62);
              LODWORD(v39) = (_DWORD)a4;
              v16 = v15 + 1;
              if ( v15 + 1 < v15 )
              {
                MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
              }
              else if ( v16 > *((_DWORD *)this + 61) )
              {
                v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 224, 32, 1, &v39);
                if ( v19 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC0u, 0LL);
              }
              else
              {
                v17 = v15;
                v18 = *((_QWORD *)this + 28);
                v17 *= 32LL;
                *(_OWORD *)(v17 + v18) = v39;
                *(_OWORD *)(v17 + v18 + 16) = v40;
                *((_DWORD *)this + 62) = v16;
              }
            }
          }
          else
          {
            CHolographicClient::ProcessResizeTexture(this, a3);
          }
        }
        else
        {
          CHolographicClient::ProcessRemoveTexture(this, a3);
        }
      }
      else
      {
        CHolographicClient::ProcessAddTexture(this, a3);
      }
    }
    else
    {
      CHolographicClient::ProcessInitializeTexture(this, a3);
    }
  }
}
