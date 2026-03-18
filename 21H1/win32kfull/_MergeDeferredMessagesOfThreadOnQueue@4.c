/*
 * XREFs of _MergeDeferredMessagesOfThreadOnQueue@4 @ 0xAAAC0
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 * Callees:
 *     _WPP_RECORDER_SF_qiqdd@44 @ 0x6C1F6 (_WPP_RECORDER_SF_qiqdd@44.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _IsHiddenByInputService@4 @ 0xAAB8E (_IsHiddenByInputService@4.c)
 *     ?RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z @ 0xC3B74 (-RemoveQMsgFromDeferList@@YGXPAUtagMLIST@@PAUtagQMSG@@@Z.c)
 */

int *__thiscall MergeDeferredMessagesOfThreadOnQueue(int *this)
{
  int *result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  int v7; // ecx
  bool v8; // zf
  _DWORD *v9; // esi
  _DWORD *v10; // edx
  struct tagMLIST *v11; // [esp+0h] [ebp-24h]
  struct tagQMSG *v12; // [esp+4h] [ebp-20h]
  int v13[3]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v14; // [esp+18h] [ebp-Ch]
  _DWORD *v15; // [esp+1Ch] [ebp-8h]
  int *v16; // [esp+20h] [ebp-4h]

  v16 = this;
  result = CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v13, this[59]);
  v3 = 0;
  v4 = (_DWORD *)(this[59] + 12);
  v14 = 0;
  v5 = (_DWORD *)v4[4];
  v6 = (_DWORD *)v4[1];
  v15 = v6;
  if ( v5 )
  {
    do
    {
      if ( !v6 )
        break;
      result = v16;
      if ( (int *)v5[17] == v16 )
      {
        result = (int *)v6[6];
        if ( (unsigned int)result < v5[6] )
        {
          if ( !IsHiddenByInputService(v5) )
            v14 = (_DWORD *)((char *)v3 + 1);
          v9 = v5 + 1;
          v5 = (_DWORD *)v5[1];
          RemoveQMsgFromDeferList(v11, v12);
          v6 = v15;
          result = (int *)*v15;
          *v10 = *v15;
          *v9 = v6;
          if ( v6 == (_DWORD *)v4[1] )
          {
            v4[1] = v10;
          }
          else
          {
            result = (int *)*v6;
            *(_DWORD *)(*v6 + 4) = v10;
          }
          v3 = v14;
          *v6 = v10;
        }
        else
        {
          v6 = (_DWORD *)v6[1];
          v15 = v6;
        }
      }
      else
      {
        v5 = (_DWORD *)v5[1];
      }
    }
    while ( v5 );
    if ( v5 )
    {
      result = v16;
      do
      {
        if ( (int *)v5[17] == result )
        {
          if ( !IsHiddenByInputService(v5) )
          {
            v3 = (_DWORD *)((char *)v3 + 1);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qiqdd(
                v7,
                17,
                (int)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
                (char)v5,
                v5[24],
                v5[25],
                (char)v4,
                v4[3],
                (_BYTE)v3 + v4[2]);
          }
          v14 = (_DWORD *)v5[1];
          RemoveQMsgFromDeferList(v11, v12);
          *v5 = *v4;
          if ( *v4 )
            *(_DWORD *)(*v4 + 4) = v5;
          v8 = v4[1] == 0;
          *v4 = v5;
          if ( v8 )
            v4[1] = v5;
          v5[1] = 0;
          v5 = v14;
          result = v16;
        }
        else
        {
          v5 = (_DWORD *)v5[1];
        }
      }
      while ( v5 );
    }
  }
  v4[2] += v3;
  return result;
}
