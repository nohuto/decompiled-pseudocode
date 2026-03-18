/*
 * XREFs of ?Win32kLeakTrackingLiveDumpCallback@@YGJPAXP6GJ0PBU_GUID@@0K@ZKKKKK0@Z @ 0x18354A
 * Callers:
 *     <none>
 * Callees:
 *     ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QAE_NXZ @ 0xD431E (-Empty@CLeakTrackingAllocator@NSInstrumentation@@QAE_NXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?Win32kAddLeakTrackingSecondaryData@@YGJPAXP6GJ0PBU_GUID@@0K@Z1@Z @ 0x18348F (-Win32kAddLeakTrackingSecondaryData@@YGJPAXP6GJ0PBU_GUID@@0K@Z1@Z.c)
 */

unsigned int *__stdcall Win32kLeakTrackingLiveDumpCallback(
        void *a1,
        int (__stdcall *a2)(void *, const struct _GUID *, void *, unsigned int),
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *result; // eax
  NSInstrumentation::CLeakTrackingAllocator *v9; // ecx
  int v10; // ebx
  unsigned int v11; // esi
  int *v12; // edi
  int v13; // eax
  int (__stdcall *v14)(void *, const struct _GUID *, void *, unsigned int); // [esp+4h] [ebp-48h]
  const struct _GUID *v15; // [esp+8h] [ebp-44h]
  _DWORD v16[12]; // [esp+18h] [ebp-34h] BYREF

  result = a8;
  if ( a8 )
  {
    result = (unsigned int *)a2(a1, &stru_2587E8, (void *)*a8, a8[1]);
    v10 = (int)result;
    if ( (int)result >= 0 )
    {
      if ( *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) && !NSInstrumentation::CLeakTrackingAllocator::Empty(v9) )
      {
        v16[0] = dword_2587D8[0];
        v16[1] = dword_2587D8[1];
        v16[2] = dword_2587D8[2];
        v16[3] = dword_2587D8[3];
        v16[4] = dword_2587C8[0];
        v16[5] = dword_2587C8[1];
        v16[6] = dword_2587C8[2];
        v16[7] = dword_2587C8[3];
        v16[8] = dword_2587B8[0];
        v16[9] = dword_2587B8[1];
        v16[10] = dword_2587B8[2];
        v16[11] = dword_2587B8[3];
        v11 = 0;
        v12 = v16;
        do
        {
          if ( v10 < 0 )
            break;
          v13 = Win32kAddLeakTrackingSecondaryData(
                  (int (__stdcall *)(NSInstrumentation::CLeakTrackingAllocator *, int *, _DWORD *, SIZE_T))a2,
                  (NSInstrumentation::CLeakTrackingAllocator *)a1,
                  v12,
                  v14,
                  v15);
          ++v11;
          v12 += 4;
          v10 = v13;
        }
        while ( v11 < 3 );
      }
      return (unsigned int *)v10;
    }
  }
  return result;
}
