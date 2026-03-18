/*
 * XREFs of ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0042EF4
 * Callers:
 *     ?PrepareMessage@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@IGGPEBEPEADPEAI@Z @ 0x1C0042D74 (-PrepareMessage@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@IGGPEBEPEADP.c)
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C0042E34 (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 * Callees:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C004304C (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 *     ?NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C01FC750 (-NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsg.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        __int16 a3,
        __int16 a4,
        const unsigned __int8 *a5,
        char *a6,
        int a7,
        unsigned int a8)
{
  struct MsgCallState *v8; // rdi
  int v9; // r10d
  unsigned __int64 v11; // rcx
  const unsigned __int8 *v12; // rax
  unsigned int v13; // esi
  _DWORD *v14; // r14

  v8 = (CoreMessaging::Calling::SendProcessor *)((char *)this + 120);
  *((_DWORD *)this + 31) = -1;
  v9 = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)this = a5;
  *((_QWORD *)this + 17) = a2;
  *((_WORD *)this + 74) = a3;
  *((_WORD *)this + 75) = a4;
  v11 = *a5;
  v12 = a5 + 1;
  *((_DWORD *)this + 20) = v11;
  *(_QWORD *)this = a5 + 1;
  if ( (unsigned int)v11 <= 0x10 && (a7 || !(_DWORD)v11 || a6) )
  {
    *((_DWORD *)this + 31) = 0;
    v13 = 8;
    *((_QWORD *)this + 1) = v12;
    if ( (_DWORD)v11 )
    {
      v14 = (_DWORD *)((char *)this + 84);
      while ( 1 )
      {
        v9 = CoreMessaging::Calling::SendProcessor::ReadParameterSize(
               this,
               &a6,
               a7,
               a8,
               0,
               0,
               (unsigned int *)this + 21);
        if ( v9 < 0 )
          break;
        *((_DWORD *)this + *((unsigned int *)this + 31) + 4) = *v14;
        v11 = (unsigned int)*v14;
        if ( (unsigned int)v11 > 0xFFFFFFFC
          || (v11 = ((_DWORD)v11 + 3) & 0xFFFFFFFC, (int)v11 + 4 < (unsigned int)v11)
          || v13 + (_DWORD)v11 + 4 < v13 )
        {
          *(_DWORD *)v8 = 107;
          break;
        }
        ++*((_DWORD *)this + 31);
        v13 += v11 + 4;
        if ( *((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
        {
          v12 = (const unsigned __int8 *)*((_QWORD *)this + 1);
          goto LABEL_11;
        }
      }
    }
    else
    {
LABEL_11:
      LOBYTE(v11) = *v12;
      *((_QWORD *)this + 1) = v12 + 1;
      if ( (_BYTE)v11 )
      {
        *(_DWORD *)v8 = 203;
      }
      else
      {
        *((_DWORD *)this + 36) = v13;
        v9 = 0;
      }
    }
  }
  else
  {
    *(_DWORD *)v8 = 204;
  }
  if ( *(_DWORD *)v8 )
    return (unsigned int)CoreMessaging::Calling::SendProcessor::NotifyInvalidHelper(
                           (CoreMessaging::Calling::SendProcessor *)v11,
                           *((struct IMessageCallSendHost **)this + 17),
                           v8);
  return (unsigned int)v9;
}
