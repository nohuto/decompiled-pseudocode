/*
 * XREFs of ?GenerateCtrlInputMessages@InteractiveControlInput@@IAEJPAUtagWND@@I@Z @ 0x1B2E90
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1B2F74 (-GenerateMessages@InteractiveControlInput@@QAEJPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 */

int __thiscall InteractiveControlInput::GenerateCtrlInputMessages(
        InteractiveControlInput *this,
        struct tagWND *a2,
        unsigned int a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  int v5; // edi
  struct tagINPUT_MESSAGE_SOURCE *v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+4h] [ebp-1Ch]
  struct tagWND *v10; // [esp+14h] [ebp-Ch]
  unsigned int v11[2]; // [esp+18h] [ebp-8h] BYREF

  v3 = 0;
  v11[0] = 32;
  v11[1] = 1;
  v4 = 0;
  if ( a2 )
  {
    v5 = -5;
    v10 = (struct tagWND *)(*(unsigned __int16 *)(*((_DWORD *)this + 6) + 4) | (*((unsigned __int16 *)this + 10) << 16));
    while ( 1 )
    {
      if ( (a3 & (1 << (v5 + 5))) == 1 << (v5 + 5) )
      {
        switch ( v5 )
        {
          case 0:
          case 1:
          case 3:
          case 4:
          case 8:
            v4 = 1;
            break;
          case 2:
            v4 = *((_DWORD *)this + 14);
            break;
          case 5:
          case 6:
          case 7:
            v4 = *((unsigned __int16 *)this + 18) | (*((unsigned __int16 *)this + 20) << 16);
            break;
          default:
            break;
        }
        if ( !_PostTransformableMessageExtended((struct tagQMSG *)(v5 + 749), (int *)a2, v10, v4, v11, 1, v7, v8) )
          return -1073740030;
      }
      if ( (unsigned int)(++v5 + 5) >= 0x11 )
        return v3;
    }
  }
  return v3;
}
