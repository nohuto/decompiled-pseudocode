/*
 * XREFs of ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00A3BA0
 * Callers:
 *     CoreUICallSendVaList @ 0x1C00A3A78 (CoreUICallSendVaList.c)
 * Callees:
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C00A427C (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C01FAE50 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::MarshalSend(
        CoreMessaging::Calling::SendProcessor *this,
        char *a2,
        int a3,
        double *a4)
{
  __int64 v6; // rax
  char *v7; // rcx
  char *v8; // rcx
  bool v9; // zf
  char *v10; // rax
  _DWORD *v11; // rdx
  int v12; // ecx
  unsigned int v13; // edx
  int *v14; // r9
  unsigned __int8 *v15; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  const void *v22; // rdx
  size_t v23; // r8
  char v24; // cl
  const void *v26; // r8
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  double v35; // xmm0_8
  int v36; // ecx
  char *v37; // rax
  char v38; // cl
  _BYTE *v39; // rax
  __int64 v40; // rax

  if ( ((a3 + 3) & 0xFFFFFFFC) != a3 )
    goto LABEL_46;
  *((_BYTE *)this + 112) = 0;
  v6 = -1LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a2;
  v7 = &a2[a3];
  if ( v7 >= a2 )
    v6 = (__int64)&a2[a3];
  *((_QWORD *)this + 13) = v6;
  if ( v7 < a2 )
LABEL_46:
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xB4uLL);
  if ( (unsigned int)(v6 - (_DWORD)a2) >= 8 )
  {
    v8 = a2;
    *((_QWORD *)this + 12) = a2 + 8;
  }
  else
  {
    v8 = 0LL;
  }
  *(_DWORD *)v8 = *((_DWORD *)this + 36);
  *((_WORD *)v8 + 2) = *((_WORD *)this + 74);
  *((_WORD *)v8 + 3) = *((_WORD *)this + 75);
  *((_DWORD *)this + 31) = 0;
  v9 = *((_DWORD *)this + 20) == 0;
  v10 = *(char **)this;
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  if ( !v9 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4
        || (v11 = (_DWORD *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = v11 + 1, !v11) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xE2uLL);
      }
      v12 = *((_DWORD *)this + *((unsigned int *)this + 31) + 4);
      *v11 = v12;
      *((_DWORD *)this + 21) = v12;
      v13 = (v12 + 3) & 0xFFFFFFFC;
      if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v13
        || (v14 = (int *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = (char *)v14 + v13, !v14) )
      {
        CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0xECuLL);
      }
      v15 = (unsigned __int8 *)*((_QWORD *)this + 1);
      v16 = *v15;
      *((_QWORD *)this + 1) = v15 + 1;
      if ( (unsigned __int8)v16 <= 9u )
      {
        if ( (_BYTE)v16 == 9 )
        {
          v35 = *a4++;
          *(float *)v14 = v35;
          goto LABEL_19;
        }
        v27 = v16 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( !v30 )
                goto LABEL_41;
              v31 = v30 - 1;
              if ( v31 )
              {
                v32 = v31 - 1;
                if ( v32 )
                {
                  v33 = v32 - 1;
                  if ( v33 )
                  {
                    if ( v33 != 1 )
                      goto LABEL_35;
LABEL_41:
                    v40 = *(_QWORD *)a4++;
                    *(_QWORD *)v14 = v40;
                    goto LABEL_19;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v17 = v16 - 10;
        if ( !v17 )
          goto LABEL_41;
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                v36 = v21 - 1;
                if ( !v36 )
                  CoreMessaging::Calling::FailFast::Error(
                    (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
                    0x178uLL);
                if ( v36 != 1 )
LABEL_35:
                  CoreMessaging::Calling::FailFast::Error(
                    (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
                    0x19DuLL);
                CoreMessaging::Calling::SendProcessor::MarshalArray(this, v14, *(const void **)a4);
                v37 = (char *)*((_QWORD *)this + 1);
                a4 += 2;
                v38 = *v37;
                v39 = v37 + 1;
                *((_QWORD *)this + 1) = v39;
                if ( v38 == 14 )
                  *((_QWORD *)this + 1) = v39 + 2;
              }
              else
              {
                v22 = *(const void **)a4;
                v23 = *((unsigned int *)this + 21);
                ++a4;
                *((_QWORD *)this + 1) = v15 + 3;
                memmove(v14, v22, v23);
              }
            }
            else
            {
              v26 = *(const void **)a4++;
              CoreMessaging::Calling::SendProcessor::MarshalArray(this, v14, v26);
            }
            goto LABEL_19;
          }
        }
      }
      v34 = *(_DWORD *)a4++;
      *v14 = v34;
LABEL_19:
      if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
      {
        v10 = (char *)*((_QWORD *)this + 1);
        break;
      }
    }
  }
  v24 = *v10;
  *((_QWORD *)this + 1) = v10 + 1;
  if ( v24 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp", 0x1AFuLL);
  return 0LL;
}
