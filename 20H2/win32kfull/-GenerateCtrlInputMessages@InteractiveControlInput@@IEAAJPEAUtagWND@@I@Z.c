/*
 * XREFs of ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0258054
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0258170 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall InteractiveControlInput::GenerateCtrlInputMessages(
        InteractiveControlInput *this,
        struct tagWND *a2,
        int a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v9; // r14
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+6Ch] [rbp+14h]

  v3 = 0;
  v11 = 32;
  v7 = 0LL;
  v12 = 1;
  if ( a2 )
  {
    v8 = 744;
    v9 = *(unsigned __int16 *)(*((_QWORD *)this + 5) + 8LL) | ((unsigned __int64)*((unsigned __int16 *)this + 16) << 16);
    do
    {
      if ( (a3 & (1 << (v8 + 24))) != 1 << (v8 + 24) )
        goto LABEL_12;
      if ( v8 >= 0x2ED )
      {
        if ( v8 <= 0x2EE )
          goto LABEL_10;
        if ( v8 == 751 )
        {
          v7 = *((int *)this + 19);
        }
        else
        {
          if ( v8 <= 0x2F1 )
            goto LABEL_10;
          if ( v8 > 0x2F4 )
          {
            if ( v8 != 757 )
              goto LABEL_11;
LABEL_10:
            v7 = 1LL;
            goto LABEL_11;
          }
          v7 = *((unsigned __int16 *)this + 28) | ((unsigned __int64)*((unsigned __int16 *)this + 30) << 16);
        }
      }
LABEL_11:
      if ( !_PostTransformableMessageExtended(
              (__int64)a2,
              v8,
              v9,
              (struct _LARGE_STRING *)v7,
              (struct tagINPUT_MESSAGE_SOURCE *)&v11,
              1) )
        return (unsigned int)-1073740030;
LABEL_12:
      ++v8;
    }
    while ( v8 - 744 < 0x11 );
  }
  return v3;
}
